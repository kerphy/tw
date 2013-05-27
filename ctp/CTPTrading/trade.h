#ifndef HEADER_5DE900DAF767DA14
#define HEADER_5DE900DAF767DA14

/*
** Copyright (C) QPSOFT.COM All rights reserved.
*/
#ifndef TRADE_H
#define TRADE_H

#include "include/stdafx.h"
#include "api/ThostFtdcTraderApi.h"

class Trade : public CThostFtdcTraderSpi
{
public:
    /** Default constructor */
    Trade()
    {
        iReqID = 0;
        addrID = -1;
        investor = new char[256];
        password = new char[256];
        broker = new char[256];
        frontAddr = new char[256];
        settleInfo = "";
        pUserApi = NULL;	//��������ж��Ƿ�����
    }
    /** Default destructor */
    virtual ~Trade()
    {
        if(pUserApi)
            pUserApi->Release();
    }

    ///���ͻ����뽻�׺�̨������ͨ������ʱ����δ��¼ǰ�����÷��������á�
    virtual void OnFrontConnected() ;

    ///���ͻ����뽻�׺�̨ͨ�����ӶϿ�ʱ���÷��������á���������������API���Զ��������ӣ��ͻ��˿ɲ���������
    ///@param nReason ����ԭ��
    ///        0x1001 �����ʧ��
    ///        0x1002 ����дʧ��
    ///        0x2001 ����������ʱ
    ///        0x2002 ��������ʧ��
    ///        0x2003 �յ�������
    virtual void OnFrontDisconnected(int nReason) ;

    ///������ʱ���档����ʱ��δ�յ�����ʱ���÷��������á�
    ///@param nTimeLapse �����ϴν��ձ��ĵ�ʱ��
    virtual void OnHeartBeatWarning(int nTimeLapse) ;

    ///�ͻ�����֤��Ӧ
    virtual void OnRspAuthenticate(CThostFtdcRspAuthenticateField* pRspAuthenticateField, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) ;


    ///��¼������Ӧ
    virtual void OnRspUserLogin(CThostFtdcRspUserLoginField* pRspUserLogin, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) ;

    ///�ǳ�������Ӧ
    virtual void OnRspUserLogout(CThostFtdcUserLogoutField* pUserLogout, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) ;

    ///�û��������������Ӧ
    virtual void OnRspUserPasswordUpdate(CThostFtdcUserPasswordUpdateField* pUserPasswordUpdate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) ;

    ///�ʽ��˻��������������Ӧ
    virtual void OnRspTradingAccountPasswordUpdate(CThostFtdcTradingAccountPasswordUpdateField* pTradingAccountPasswordUpdate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) ;

    ///����¼��������Ӧ
    virtual void OnRspOrderInsert(CThostFtdcInputOrderField* pInputOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) ;

    ///Ԥ��¼��������Ӧ
    virtual void OnRspParkedOrderInsert(CThostFtdcParkedOrderField* pParkedOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) ;

    ///Ԥ�񳷵�¼��������Ӧ
    virtual void OnRspParkedOrderAction(CThostFtdcParkedOrderActionField* pParkedOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) ;

    ///��������������Ӧ
    virtual void OnRspOrderAction(CThostFtdcInputOrderActionField* pInputOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) ;

    ///��ѯ��󱨵�������Ӧ
    virtual void OnRspQueryMaxOrderVolume(CThostFtdcQueryMaxOrderVolumeField* pQueryMaxOrderVolume, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) ;

    ///Ͷ���߽�����ȷ����Ӧ
    virtual void OnRspSettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField* pSettlementInfoConfirm, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) ;

    ///ɾ��Ԥ����Ӧ
    virtual void OnRspRemoveParkedOrder(CThostFtdcRemoveParkedOrderField* pRemoveParkedOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) ;

    ///ɾ��Ԥ�񳷵���Ӧ
    virtual void OnRspRemoveParkedOrderAction(CThostFtdcRemoveParkedOrderActionField* pRemoveParkedOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) ;

    ///�����ѯ������Ӧ
    virtual void OnRspQryOrder(CThostFtdcOrderField* pOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) ;

    ///�����ѯ�ɽ���Ӧ
    virtual void OnRspQryTrade(CThostFtdcTradeField* pTrade, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) ;

    ///�����ѯͶ���ֲ߳���Ӧ
    virtual void OnRspQryInvestorPosition(CThostFtdcInvestorPositionField* pInvestorPosition, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) ;

    ///�����ѯ�ʽ��˻���Ӧ
    virtual void OnRspQryTradingAccount(CThostFtdcTradingAccountField* pTradingAccount, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) ;

    ///�����ѯͶ������Ӧ
    virtual void OnRspQryInvestor(CThostFtdcInvestorField* pInvestor, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) ;

    ///�����ѯ���ױ�����Ӧ
    virtual void OnRspQryTradingCode(CThostFtdcTradingCodeField* pTradingCode, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) ;

    ///�����ѯ��Լ��֤������Ӧ
    virtual void OnRspQryInstrumentMarginRate(CThostFtdcInstrumentMarginRateField* pInstrumentMarginRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) ;

    ///�����ѯ��Լ����������Ӧ
    virtual void OnRspQryInstrumentCommissionRate(CThostFtdcInstrumentCommissionRateField* pInstrumentCommissionRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) ;

    ///�����ѯ��������Ӧ
    virtual void OnRspQryExchange(CThostFtdcExchangeField* pExchange, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) ;

    ///�����ѯ��Լ��Ӧ
    virtual void OnRspQryInstrument(CThostFtdcInstrumentField* pInstrument, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) ;

    ///�����ѯ������Ӧ
    virtual void OnRspQryDepthMarketData(CThostFtdcDepthMarketDataField* pDepthMarketData, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) ;

    ///�����ѯͶ���߽�������Ӧ
    virtual void OnRspQrySettlementInfo(CThostFtdcSettlementInfoField* pSettlementInfo, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) ;

    ///�����ѯת��������Ӧ
    virtual void OnRspQryTransferBank(CThostFtdcTransferBankField* pTransferBank, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) ;

    ///�����ѯͶ���ֲ߳���ϸ��Ӧ
    virtual void OnRspQryInvestorPositionDetail(CThostFtdcInvestorPositionDetailField* pInvestorPositionDetail, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) ;

    ///�����ѯ�ͻ�֪ͨ��Ӧ
    virtual void OnRspQryNotice(CThostFtdcNoticeField* pNotice, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) ;

    ///�����ѯ������Ϣȷ����Ӧ
    virtual void OnRspQrySettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField* pSettlementInfoConfirm, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) ;

    ///�����ѯͶ���ֲ߳���ϸ��Ӧ
    virtual void OnRspQryInvestorPositionCombineDetail(CThostFtdcInvestorPositionCombineDetailField* pInvestorPositionCombineDetail, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) ;

    ///��ѯ��֤����ϵͳ���͹�˾�ʽ��˻���Կ��Ӧ
    virtual void OnRspQryCFMMCTradingAccountKey(CThostFtdcCFMMCTradingAccountKeyField* pCFMMCTradingAccountKey, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) ;

    ///�����ѯ�ֵ��۵���Ϣ��Ӧ
    virtual void OnRspQryEWarrantOffset(CThostFtdcEWarrantOffsetField* pEWarrantOffset, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) ;

    ///�����ѯת����ˮ��Ӧ
    virtual void OnRspQryTransferSerial(CThostFtdcTransferSerialField* pTransferSerial, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) ;

    ///�����ѯ����ǩԼ��ϵ��Ӧ
    virtual void OnRspQryAccountregister(CThostFtdcAccountregisterField* pAccountregister, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) ;

    ///����Ӧ��
    virtual void OnRspError(CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) ;

    ///����֪ͨ
    virtual void OnRtnOrder(CThostFtdcOrderField* pOrder) ;

    ///�ɽ�֪ͨ
    virtual void OnRtnTrade(CThostFtdcTradeField* pTrade) ;

    ///����¼�����ر�
    virtual void OnErrRtnOrderInsert(CThostFtdcInputOrderField* pInputOrder, CThostFtdcRspInfoField* pRspInfo) ;

    ///������������ر�
    virtual void OnErrRtnOrderAction(CThostFtdcOrderActionField* pOrderAction, CThostFtdcRspInfoField* pRspInfo) ;

    ///��Լ����״̬֪ͨ
    virtual void OnRtnInstrumentStatus(CThostFtdcInstrumentStatusField* pInstrumentStatus) ;

    ///����֪ͨ
    virtual void OnRtnTradingNotice(CThostFtdcTradingNoticeInfoField* pTradingNoticeInfo) ;

    ///��ʾ������У�����
    virtual void OnRtnErrorConditionalOrder(CThostFtdcErrorConditionalOrderField* pErrorConditionalOrder) ;

    ///�����ѯǩԼ������Ӧ
    virtual void OnRspQryContractBank(CThostFtdcContractBankField* pContractBank, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) ;

    ///�����ѯԤ����Ӧ
    virtual void OnRspQryParkedOrder(CThostFtdcParkedOrderField* pParkedOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) ;

    ///�����ѯԤ�񳷵���Ӧ
    virtual void OnRspQryParkedOrderAction(CThostFtdcParkedOrderActionField* pParkedOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) ;

    ///�����ѯ����֪ͨ��Ӧ
    virtual void OnRspQryTradingNotice(CThostFtdcTradingNoticeField* pTradingNotice, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) ;

    ///�����ѯ���͹�˾���ײ�����Ӧ
    virtual void OnRspQryBrokerTradingParams(CThostFtdcBrokerTradingParamsField* pBrokerTradingParams, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) ;

    ///�����ѯ���͹�˾�����㷨��Ӧ
    virtual void OnRspQryBrokerTradingAlgos(CThostFtdcBrokerTradingAlgosField* pBrokerTradingAlgos, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) ;

    ///���з��������ʽ�ת�ڻ�֪ͨ
    virtual void OnRtnFromBankToFutureByBank(CThostFtdcRspTransferField* pRspTransfer) ;

    ///���з����ڻ��ʽ�ת����֪ͨ
    virtual void OnRtnFromFutureToBankByBank(CThostFtdcRspTransferField* pRspTransfer) ;

    ///���з����������ת�ڻ�֪ͨ
    virtual void OnRtnRepealFromBankToFutureByBank(CThostFtdcRspRepealField* pRspRepeal) ;

    ///���з�������ڻ�ת����֪ͨ
    virtual void OnRtnRepealFromFutureToBankByBank(CThostFtdcRspRepealField* pRspRepeal) ;

    ///�ڻ����������ʽ�ת�ڻ�֪ͨ
    virtual void OnRtnFromBankToFutureByFuture(CThostFtdcRspTransferField* pRspTransfer) ;

    ///�ڻ������ڻ��ʽ�ת����֪ͨ
    virtual void OnRtnFromFutureToBankByFuture(CThostFtdcRspTransferField* pRspTransfer) ;

    ///ϵͳ����ʱ�ڻ����ֹ������������ת�ڻ��������д�����Ϻ��̷��ص�֪ͨ
    virtual void OnRtnRepealFromBankToFutureByFutureManual(CThostFtdcRspRepealField* pRspRepeal) ;

    ///ϵͳ����ʱ�ڻ����ֹ���������ڻ�ת�����������д�����Ϻ��̷��ص�֪ͨ
    virtual void OnRtnRepealFromFutureToBankByFutureManual(CThostFtdcRspRepealField* pRspRepeal) ;

    ///�ڻ������ѯ�������֪ͨ
    virtual void OnRtnQueryBankBalanceByFuture(CThostFtdcNotifyQueryAccountField* pNotifyQueryAccount) ;

    ///�ڻ����������ʽ�ת�ڻ�����ر�
    virtual void OnErrRtnBankToFutureByFuture(CThostFtdcReqTransferField* pReqTransfer, CThostFtdcRspInfoField* pRspInfo) ;

    ///�ڻ������ڻ��ʽ�ת���д���ر�
    virtual void OnErrRtnFutureToBankByFuture(CThostFtdcReqTransferField* pReqTransfer, CThostFtdcRspInfoField* pRspInfo) ;

    ///ϵͳ����ʱ�ڻ����ֹ������������ת�ڻ�����ر�
    virtual void OnErrRtnRepealBankToFutureByFutureManual(CThostFtdcReqRepealField* pReqRepeal, CThostFtdcRspInfoField* pRspInfo) ;

    ///ϵͳ����ʱ�ڻ����ֹ���������ڻ�ת���д���ر�
    virtual void OnErrRtnRepealFutureToBankByFutureManual(CThostFtdcReqRepealField* pReqRepeal, CThostFtdcRspInfoField* pRspInfo) ;

    ///�ڻ������ѯ����������ر�
    virtual void OnErrRtnQueryBankBalanceByFuture(CThostFtdcReqQueryAccountField* pReqQueryAccount, CThostFtdcRspInfoField* pRspInfo) ;

    ///�ڻ������������ת�ڻ��������д�����Ϻ��̷��ص�֪ͨ
    virtual void OnRtnRepealFromBankToFutureByFuture(CThostFtdcRspRepealField* pRspRepeal) ;

    ///�ڻ���������ڻ�ת�����������д�����Ϻ��̷��ص�֪ͨ
    virtual void OnRtnRepealFromFutureToBankByFuture(CThostFtdcRspRepealField* pRspRepeal) ;

    ///�ڻ����������ʽ�ת�ڻ�Ӧ��
    virtual void OnRspFromBankToFutureByFuture(CThostFtdcReqTransferField* pReqTransfer, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) ;

    ///�ڻ������ڻ��ʽ�ת����Ӧ��
    virtual void OnRspFromFutureToBankByFuture(CThostFtdcReqTransferField* pReqTransfer, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) ;

    ///�ڻ������ѯ�������Ӧ��
    virtual void OnRspQueryBankAccountMoneyByFuture(CThostFtdcReqQueryAccountField* pReqQueryAccount, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast) ;

    ///���з������ڿ���֪ͨ
    virtual void OnRtnOpenAccountByBank(CThostFtdcOpenAccountField* pOpenAccount) ;

    ///���з�����������֪ͨ
    virtual void OnRtnCancelAccountByBank(CThostFtdcCancelAccountField* pCancelAccount) ;

    ///���з����������˺�֪ͨ
    virtual void OnRtnChangeAccountByBank(CThostFtdcChangeAccountField* pChangeAccount) ;

    void ReqLogin(char* Investor, char* PWD)
    {
        strcpy(investor, Investor);
        strcpy(password, PWD);

        CThostFtdcReqUserLoginField req;
        memset(&req, 0, sizeof(req));
        strcpy(req.BrokerID, broker);
        strcpy(req.UserID, investor);
        strcpy(req.Password, password);
        pUserApi->ReqUserLogin(&req, ++iReqID);
    }

	void ReqConnect(char* f, const char* b)
	{
		pUserApi = CThostFtdcTraderApi::CreateFtdcTraderApi("logTrade", false);
        pUserApi->RegisterSpi((CThostFtdcTraderSpi*)this);
        pUserApi->SubscribePublicTopic(THOST_TERT_RESTART);
        pUserApi->SubscribePrivateTopic(THOST_TERT_RESTART);

        //this->addrID = frontID;
        char* addr1 = new char[256];
        strcpy(this->broker, b);

        pUserApi->RegisterFront(f);
        pUserApi->Init();
	}

    void ReqConnect(int frontID)
    {
        pUserApi = CThostFtdcTraderApi::CreateFtdcTraderApi("logTrade", false);
        pUserApi->RegisterSpi((CThostFtdcTraderSpi*)this);
        pUserApi->SubscribePublicTopic(THOST_TERT_RESTART);
        pUserApi->SubscribePrivateTopic(THOST_TERT_RESTART);

        this->addrID = frontID;
        char* addr1 = new char[256];

		//ģ��
        if(frontID == 0)
		{
        	strcpy(this->broker, "2030");
            strcpy(addr1, "tcp://asp-sim2-front1.financial-trading-platform.com:26205");
		}
		else
		{
			strcpy(this->broker, "66666");
			sprintf(addr1, "tcp://ctp1-front%d.citicsf.com:41205", addrID);
		}

        pUserApi->RegisterFront(addr1);
        pUserApi->Init();

        //pUserApi->Join();
    }
	int iReqID;
	char* broker, *investor;
    CThostFtdcTraderApi* pUserApi;

protected:

private:
    int addrID;
    char* password;
    char* frontAddr;
    string settleInfo;

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

#endif // TRADE_H

#endif // header guard