#ifndef HEADER_2356EF0AD7E82BAF
#define HEADER_2356EF0AD7E82BAF

/*
** Copyright (C) QPSOFT.COM All rights reserved.
*/
#ifndef QUOTE_H
#define QUOTE_H

#include "include/stdafx.h"
#include "api/ThostFtdcMdApi.h"

//#ifdef WIN32
//#pragma comment(lib, "api/thostmduserapi")
//#endif

class Quote : public CThostFtdcMdSpi
{
public:
    /** Default constructor */
    //Quote(string Broker="2030", string FrontAddr="tcp://asp-sim2-md1.financial-trading-platform.com:26213");
    Quote()
    {
        this->iReqID = 0;
        this->broker = new char[20];
        this->frontAddr = new char[256];
        pUserApi = NULL;	//方便程序判断是否连接
    }

    /** Default destructor */
    virtual ~Quote()
    {
        if (pUserApi)
            pUserApi->Release();
    }

    ///错误应答
    virtual void OnRspError(CThostFtdcRspInfoField* pRspInfo,
                            int nRequestID, bool bIsLast);

    ///当客户端与交易后台通信连接断开时，该方法被调用。当发生这个情况后，API会自动重新连接，客户端可不做处理。
    ///@param nReason 错误原因
    ///        0x1001 网络读失败
    ///        0x1002 网络写失败
    ///        0x2001 接收心跳超时
    ///        0x2002 发送心跳失败
    ///        0x2003 收到错误报文
    virtual void OnFrontDisconnected(int nReason);

    ///心跳超时警告。当长时间未收到报文时，该方法被调用。
    ///@param nTimeLapse 距离上次接收报文的时间
    virtual void OnHeartBeatWarning(int nTimeLapse);

    ///当客户端与交易后台建立起通信连接时（还未登录前），该方法被调用。
    virtual void OnFrontConnected();

    ///登录请求响应
    virtual void OnRspUserLogin(CThostFtdcRspUserLoginField* pRspUserLogin, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///订阅行情应答
    virtual void OnRspSubMarketData(CThostFtdcSpecificInstrumentField* pSpecificInstrument, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///取消订阅行情应答
    virtual void OnRspUnSubMarketData(CThostFtdcSpecificInstrumentField* pSpecificInstrument, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///深度行情通知
    virtual void OnRtnDepthMarketData(CThostFtdcDepthMarketDataField* pDepthMarketData);

	void ReqLogin(char* Investor, char* PWD)
    {
        CThostFtdcReqUserLoginField req;
        memset(&req, 0, sizeof(req));
        strcpy(req.BrokerID, broker);
        strcpy(req.UserID, Investor);
        strcpy(req.Password, PWD);
        pUserApi->ReqUserLogin(&req, ++iReqID);
    }

	void ReqConnect(char* addr, char* brokerID)
	{
		strcpy(this->frontAddr, addr);
		strcpy(this->broker, brokerID);
        pUserApi = CThostFtdcMdApi::CreateFtdcMdApi("quote", false);
        pUserApi->RegisterSpi(this);
        pUserApi->RegisterFront(addr);

        pUserApi->Init();
	}
    void ReqConnect(int addrID)
    {
        pUserApi = CThostFtdcMdApi::CreateFtdcMdApi("quote", false);
        pUserApi->RegisterSpi(this);

        char* addr1 = new char[256];
        //模拟
        if(addrID == 0)
		{
        	strcpy(this->broker, "2030");
            strcpy(addr1, "tcp://asp-sim2-md1.financial-trading-platform.com:26213");
		}
		else
		{
			strcpy(this->broker, "66666");
			sprintf(addr1, "tcp://ctp1-md%d.citicsf.com:41213", addrID);
		}

        pUserApi->RegisterFront(addr1);
        pUserApi->Init();

        //pUserApi->Join();
    }

    CThostFtdcMdApi* pUserApi;
protected:

private:
    int iReqID;
    char* broker;
    char* frontAddr;

    bool IsErrorRspInfo(CThostFtdcRspInfoField* pRspInfo)
    {
        // 如果ErrorID != 0, 说明收到了错误的响应
        bool bResult = ((pRspInfo) && (pRspInfo->ErrorID != 0));
        if (bResult)
            cerr << "--->>> ErrorID=" << pRspInfo->ErrorID
            << ", ErrorMsg=" << pRspInfo->ErrorMsg << endl;
        return bResult;
    }
};

#endif // QUOTE_H

#endif // header guard
