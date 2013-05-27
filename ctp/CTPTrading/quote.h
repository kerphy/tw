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
        pUserApi = NULL;	//��������ж��Ƿ�����
    }

    /** Default destructor */
    virtual ~Quote()
    {
        if (pUserApi)
            pUserApi->Release();
    }

    ///����Ӧ��
    virtual void OnRspError(CThostFtdcRspInfoField* pRspInfo,
                            int nRequestID, bool bIsLast);

    ///���ͻ����뽻�׺�̨ͨ�����ӶϿ�ʱ���÷��������á���������������API���Զ��������ӣ��ͻ��˿ɲ�������
    ///@param nReason ����ԭ��
    ///        0x1001 �����ʧ��
    ///        0x1002 ����дʧ��
    ///        0x2001 ����������ʱ
    ///        0x2002 ��������ʧ��
    ///        0x2003 �յ�������
    virtual void OnFrontDisconnected(int nReason);

    ///������ʱ���档����ʱ��δ�յ�����ʱ���÷��������á�
    ///@param nTimeLapse �����ϴν��ձ��ĵ�ʱ��
    virtual void OnHeartBeatWarning(int nTimeLapse);

    ///���ͻ����뽻�׺�̨������ͨ������ʱ����δ��¼ǰ�����÷��������á�
    virtual void OnFrontConnected();

    ///��¼������Ӧ
    virtual void OnRspUserLogin(CThostFtdcRspUserLoginField* pRspUserLogin, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///��������Ӧ��
    virtual void OnRspSubMarketData(CThostFtdcSpecificInstrumentField* pSpecificInstrument, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///ȡ����������Ӧ��
    virtual void OnRspUnSubMarketData(CThostFtdcSpecificInstrumentField* pSpecificInstrument, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast);

    ///�������֪ͨ
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
        //ģ��
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
        // ���ErrorID != 0, ˵���յ��˴������Ӧ
        bool bResult = ((pRspInfo) && (pRspInfo->ErrorID != 0));
        if (bResult)
            cerr << "--->>> ErrorID=" << pRspInfo->ErrorID
            << ", ErrorMsg=" << pRspInfo->ErrorMsg << endl;
        return bResult;
    }
};

#endif // QUOTE_H

#endif // header guard
