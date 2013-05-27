#include "FrameMain.h"

//(*InternalHeaders(FrameMain)
#include <wx/intl.h>
#include <wx/string.h>
//*)

#include "trade.h"
#include "quote.h"

//(*IdInit(FrameMain)
const long FrameMain::ID_RICHTEXTCTRL1 = wxNewId();
const long FrameMain::ID_CHOICE1 = wxNewId();
const long FrameMain::ID_TEXTCTRL1 = wxNewId();
const long FrameMain::ID_TEXTCTRL2 = wxNewId();
const long FrameMain::ID_BUTTON1 = wxNewId();
const long FrameMain::ID_TEXTCTRL5 = wxNewId();
const long FrameMain::ID_TEXTCTRL6 = wxNewId();
const long FrameMain::ID_PANEL1 = wxNewId();
const long FrameMain::ID_COMBOBOX1 = wxNewId();
const long FrameMain::ID_SPINCTRL1 = wxNewId();
const long FrameMain::ID_CHECKBOX1 = wxNewId();
const long FrameMain::ID_CHOICE2 = wxNewId();
const long FrameMain::ID_CHOICE3 = wxNewId();
const long FrameMain::ID_SPINCTRL2 = wxNewId();
const long FrameMain::ID_BUTTON2 = wxNewId();
const long FrameMain::ID_STATICTEXT1 = wxNewId();
const long FrameMain::ID_SPINCTRL3 = wxNewId();
const long FrameMain::ID_STATICTEXT2 = wxNewId();
const long FrameMain::ID_SPINCTRL4 = wxNewId();
const long FrameMain::ID_STATICTEXT3 = wxNewId();
const long FrameMain::ID_BUTTON3 = wxNewId();
const long FrameMain::ID_BUTTON4 = wxNewId();
const long FrameMain::ID_BUTTON5 = wxNewId();
const long FrameMain::ID_BUTTON11 = wxNewId();
const long FrameMain::ID_PANEL2 = wxNewId();
const long FrameMain::ID_STATICTEXT4 = wxNewId();
const long FrameMain::ID_CHOICE4 = wxNewId();
const long FrameMain::ID_STATICTEXT5 = wxNewId();
const long FrameMain::ID_TEXTCTRL3 = wxNewId();
const long FrameMain::ID_STATICTEXT6 = wxNewId();
const long FrameMain::ID_TEXTCTRL4 = wxNewId();
const long FrameMain::ID_BUTTON6 = wxNewId();
const long FrameMain::ID_BUTTON7 = wxNewId();
const long FrameMain::ID_BUTTON9 = wxNewId();
const long FrameMain::ID_BUTTON10 = wxNewId();
const long FrameMain::ID_SPINCTRL5 = wxNewId();
const long FrameMain::ID_PANEL3 = wxNewId();
const long FrameMain::ID_BUTTON8 = wxNewId();
const long FrameMain::ID_CHOICE5 = wxNewId();
const long FrameMain::ID_PANEL4 = wxNewId();
const long FrameMain::ID_TIMER1 = wxNewId();
const long FrameMain::ID_STATUSBAR1 = wxNewId();
//*)

BEGIN_EVENT_TABLE(FrameMain,wxFrame)
    //(*EventTable(FrameMain)
    //*)
END_EVENT_TABLE()

FrameMain::FrameMain(wxWindow* parent,wxWindowID id)
{
    //(*Initialize(FrameMain)
    Create(parent, id, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxDEFAULT_FRAME_STYLE, _T("id"));
    SetClientSize(wxSize(679,452));
    RichTextCtrlMsg = new wxRichTextCtrl(this, ID_RICHTEXTCTRL1, wxEmptyString, wxPoint(8,256), wxSize(664,160), wxRE_MULTILINE|wxSIMPLE_BORDER, wxDefaultValidator, _T("ID_RICHTEXTCTRL1"));
    wxRichTextAttr rchtxtAttr_1;
    Panel1 = new wxPanel(this, ID_PANEL1, wxPoint(24,8), wxSize(624,40), wxNO_BORDER|wxTAB_TRAVERSAL, _T("ID_PANEL1"));
    ChoiceFront = new wxChoice(Panel1, ID_CHOICE1, wxPoint(8,8), wxSize(104,22), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE1"));
    ChoiceFront->SetSelection( ChoiceFront->Append(_("模拟")) );
    ChoiceFront->Append(_("上海电信1"));
    ChoiceFront->Append(_("上海联通1"));
    ChoiceFront->Append(_("上海电信2"));
    ChoiceFront->Append(_("上海联通2"));
    ChoiceFront->Append(_("杭州电信1"));
    ChoiceFront->Append(_("杭州联通1"));
    ChoiceFront->Append(_("杭州电信2"));
    ChoiceFront->Append(_("杭州联通2"));
    ChoiceFront->Append(_("北京联通1"));
    ChoiceFront->Append(_("北京联通2"));
    ChoiceFront->Append(_("深圳电信1"));
    ChoiceFront->Append(_("深圳电信2"));
    ChoiceFront->Append(_("盘后查询"));
    ChoiceFront->Append(_("其它"));
    TextCtrlInvestor = new wxTextCtrl(Panel1, ID_TEXTCTRL1, _("帐号"), wxPoint(384,8), wxSize(88,22), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    TextCtrlPassWord = new wxTextCtrl(Panel1, ID_TEXTCTRL2, wxEmptyString, wxPoint(472,8), wxSize(72,22), wxTE_PASSWORD, wxDefaultValidator, _T("ID_TEXTCTRL2"));
    ButtonLogin = new wxButton(Panel1, ID_BUTTON1, _("登录"), wxPoint(544,8), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    TextCtrlOther = new wxTextCtrl(Panel1, ID_TEXTCTRL5, _("其它"), wxPoint(112,8), wxSize(200,22), 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
    TextCtrlOther->Disable();
    TextCtrlBroker = new wxTextCtrl(Panel1, ID_TEXTCTRL6, _("Broker"), wxPoint(312,8), wxSize(72,22), 0, wxDefaultValidator, _T("ID_TEXTCTRL6"));
    TextCtrlBroker->Disable();
    Panel2 = new wxPanel(this, ID_PANEL2, wxPoint(24,56), wxSize(624,72), wxTAB_TRAVERSAL, _T("ID_PANEL2"));
    ComboBoxInstrument = new wxComboBox(Panel2, ID_COMBOBOX1, wxEmptyString, wxPoint(8,8), wxSize(112,22), 0, 0, wxCB_SORT, wxDefaultValidator, _T("ID_COMBOBOX1"));
    SpinCtrlPrice = new wxSpinCtrl(Panel2, ID_SPINCTRL1, _T("0"), wxPoint(128,8), wxSize(88,22), 0, 0, 10000, 0, _T("ID_SPINCTRL1"));
    SpinCtrlPrice->SetValue(_T("0"));
    CheckBoxPriceType = new wxCheckBox(Panel2, ID_CHECKBOX1, _("跟盘价"), wxPoint(216,8), wxSize(56,24), 0, wxDefaultValidator, _T("ID_CHECKBOX1"));
    CheckBoxPriceType->SetValue(true);
    ChoiceDirector = new wxChoice(Panel2, ID_CHOICE2, wxPoint(272,8), wxSize(56,22), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE2"));
    ChoiceDirector->SetSelection( ChoiceDirector->Append(_("买")) );
    ChoiceDirector->Append(_("卖"));
    ChoiceOffset = new wxChoice(Panel2, ID_CHOICE3, wxPoint(336,8), wxSize(72,22), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE3"));
    ChoiceOffset->SetSelection( ChoiceOffset->Append(_("开仓")) );
    ChoiceOffset->Append(_("平仓"));
    ChoiceOffset->Append(_("平今"));
    SpinCtrlVolume = new wxSpinCtrl(Panel2, ID_SPINCTRL2, _T("1"), wxPoint(416,8), wxSize(72,22), 0, 1, 1000, 1, _T("ID_SPINCTRL2"));
    SpinCtrlVolume->SetValue(_T("1"));
    ButtonOrderInsert = new wxButton(Panel2, ID_BUTTON2, _("下单"), wxPoint(496,8), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
    StaticText1 = new wxStaticText(Panel2, ID_STATICTEXT1, _("每秒发单"), wxPoint(280,48), wxSize(48,14), 0, _T("ID_STATICTEXT1"));
    SpinCtrlTicks = new wxSpinCtrl(Panel2, ID_SPINCTRL3, _T("6"), wxPoint(328,40), wxSize(56,22), 0, 1, 1000, 6, _T("ID_SPINCTRL3"));
    SpinCtrlTicks->SetValue(_T("6"));
    StaticText2 = new wxStaticText(Panel2, ID_STATICTEXT2, _("笔, 持续"), wxPoint(384,48), wxSize(44,16), 0, _T("ID_STATICTEXT2"));
    SpinCtrlSeconds = new wxSpinCtrl(Panel2, ID_SPINCTRL4, _T("3"), wxPoint(432,40), wxSize(48,22), 0, 1, 1000, 3, _T("ID_SPINCTRL4"));
    SpinCtrlSeconds->SetValue(_T("3"));
    StaticText3 = new wxStaticText(Panel2, ID_STATICTEXT3, _("秒"), wxPoint(480,48), wxSize(16,16), wxALIGN_LEFT, _T("ID_STATICTEXT3"));
    ButtonOrderContinue = new wxButton(Panel2, ID_BUTTON3, _("连续报单"), wxPoint(496,40), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
    ButtonQryPosition = new wxButton(Panel2, ID_BUTTON4, _("查持仓"), wxPoint(8,40), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON4"));
    ButtonReqQryAccount = new wxButton(Panel2, ID_BUTTON5, _("查资金"), wxPoint(96,40), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON5"));
    ButtonQryDetail = new wxButton(Panel2, ID_BUTTON11, _("查持仓明细"), wxPoint(184,40), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON11"));
    Panel3 = new wxPanel(this, ID_PANEL3, wxPoint(24,176), wxSize(584,72), wxTAB_TRAVERSAL, _T("ID_PANEL3"));
    StaticText4 = new wxStaticText(Panel3, ID_STATICTEXT4, _("银行"), wxPoint(8,16), wxDefaultSize, 0, _T("ID_STATICTEXT4"));
    ChoiceBanks = new wxChoice(Panel3, ID_CHOICE4, wxPoint(32,8), wxSize(368,22), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE4"));
    StaticText5 = new wxStaticText(Panel3, ID_STATICTEXT5, _("资金密码"), wxPoint(8,48), wxDefaultSize, 0, _T("ID_STATICTEXT5"));
    TextCtrlAccountPwd = new wxTextCtrl(Panel3, ID_TEXTCTRL3, wxEmptyString, wxPoint(56,40), wxSize(104,22), wxTE_PASSWORD, wxDefaultValidator, _T("ID_TEXTCTRL3"));
    StaticText6 = new wxStaticText(Panel3, ID_STATICTEXT6, _("银行密码"), wxPoint(168,48), wxDefaultSize, 0, _T("ID_STATICTEXT6"));
    TextCtrlBankPwd = new wxTextCtrl(Panel3, ID_TEXTCTRL4, wxEmptyString, wxPoint(216,40), wxDefaultSize, wxTE_PASSWORD, wxDefaultValidator, _T("ID_TEXTCTRL4"));
    ButtonQryBank = new wxButton(Panel3, ID_BUTTON6, _("查银行帐户"), wxPoint(320,40), wxSize(83,24), 0, wxDefaultValidator, _T("ID_BUTTON6"));
    ButtonFuture2Bank = new wxButton(Panel3, ID_BUTTON7, _("期转银"), wxPoint(496,8), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON7"));
    ButtonBank2Future = new wxButton(Panel3, ID_BUTTON9, _("银转期"), wxPoint(496,40), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON9"));
    ButtonQryBanks = new wxButton(Panel3, ID_BUTTON10, _("查银行"), wxPoint(408,8), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON10"));
    SpinCtrlMoney = new wxSpinCtrl(Panel3, ID_SPINCTRL5, _T("1"), wxPoint(408,40), wxSize(80,22), 0, 1, 100000000, 1, _T("ID_SPINCTRL5"));
    SpinCtrlMoney->SetValue(_T("1"));
    Panel4 = new wxPanel(this, ID_PANEL4, wxPoint(24,136), wxSize(584,32), wxTAB_TRAVERSAL, _T("ID_PANEL4"));
    ButtonOrderAction = new wxButton(Panel4, ID_BUTTON8, _("撤单"), wxPoint(496,8), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON8"));
    ChoiceBrokerSeq = new wxChoice(Panel4, ID_CHOICE5, wxPoint(8,8), wxSize(472,22), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE5"));
    Timer1.SetOwner(this, ID_TIMER1);
    Timer1.Start(200, false);
    StatusBar1 = new wxStatusBar(this, ID_STATUSBAR1, wxST_SIZEGRIP|wxSIMPLE_BORDER, _T("ID_STATUSBAR1"));
    int __wxStatusBarWidths_1[1] = { -500 };
    int __wxStatusBarStyles_1[1] = { wxSB_FLAT };
    StatusBar1->SetFieldsCount(1,__wxStatusBarWidths_1);
    StatusBar1->SetStatusStyles(1,__wxStatusBarStyles_1);
    SetStatusBar(StatusBar1);

    Connect(ID_CHOICE1,wxEVT_COMMAND_CHOICE_SELECTED,(wxObjectEventFunction)&FrameMain::OnChoiceFrontSelect);
    Connect(ID_BUTTON1,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&FrameMain::OnButtonLoginClick);
    Connect(ID_COMBOBOX1,wxEVT_COMMAND_COMBOBOX_SELECTED,(wxObjectEventFunction)&FrameMain::OnComboBoxInstrumentSelected);
    Connect(ID_BUTTON2,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&FrameMain::OnButtonOrderInsertClick);
    Connect(ID_BUTTON3,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&FrameMain::OnButtonOrderContinueClick);
    Connect(ID_BUTTON4,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&FrameMain::OnButtonQryPositionClick);
    Connect(ID_BUTTON5,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&FrameMain::OnButtonReqQryAccountClick);
    Connect(ID_BUTTON11,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&FrameMain::OnButtonQryDetailClick);
    Connect(ID_BUTTON6,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&FrameMain::OnButtonQryBankClick);
    Connect(ID_BUTTON7,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&FrameMain::OnButtonFuture2BankClick);
    Connect(ID_BUTTON9,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&FrameMain::OnButtonBank2FutureClick);
    Connect(ID_BUTTON10,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&FrameMain::OnButtonQryBanksClick);
    Connect(ID_BUTTON8,wxEVT_COMMAND_BUTTON_CLICKED,(wxObjectEventFunction)&FrameMain::OnButtonOrderActionClick);
    Connect(ID_TIMER1,wxEVT_TIMER,(wxObjectEventFunction)&FrameMain::OnTimer1Trigger);
    //*)

    this->Panel2->Enable(false);
    this->Panel3->Enable(false);

    this->TextCtrlInvestor->SetValue(wxString("879487", wxConvLibc));
}

FrameMain::~FrameMain()
{
    //(*Destroy(FrameMain)
    //*)
}

//(*变量
Trade* trade = new Trade();
Quote* quote = new Quote();

char* user = new char[256];
char* pwd = new char[256];
char* tradingDay = new char[9];
char* orderInstrument = new char[256];
int orderRef = 0;
boost::posix_time::ptime ptime = boost::posix_time::microsec_clock::local_time();
list<string> msgs;			//消息表

typedef boost::unordered_map<string, CThostFtdcDepthMarketDataField> mapTick;
mapTick dicTick;
typedef boost::unordered_map<string, CThostFtdcInstrumentField>  mapInstrument;
mapInstrument dicInstrument;
typedef boost::unordered_map<string, CThostFtdcInvestorPositionField> mapPosition;
mapPosition dicPosition;
typedef boost::unordered_map<string, CThostFtdcOrderField> mapOrder;
mapOrder dicOrder;
typedef boost::unordered_map<string, CThostFtdcInvestorPositionDetailField> mapPositionDetail;
mapPositionDetail dicPositionDetail;

void show(string msg, int status = 0);
void tickToFile(CThostFtdcDepthMarketDataField f);
//*)

void show(string msg, int status)
{
    if(status == 3)	//查银行
        msgs.push_back(str(boost::format("%1%%2%")%status %msg));
    else
	{
        boost::posix_time::ptime timeNow = boost::posix_time::microsec_clock::local_time();  //universal_time();
        msgs.push_back(str(boost::format("%1%%2%\t%3%")%status %to_iso_extended_string(timeNow) %msg));
    }
}

//报单-限价
void ReqOrderInsert(const char* instrument, double price, int director, int offset, int volume)
{
    CThostFtdcInputOrderField f;
    memset(&f, 0, sizeof(f));
    f.CombHedgeFlag[0] = THOST_FTDC_HF_Speculation;	//1投机
    f.ContingentCondition = THOST_FTDC_CC_Immediately;//立即触发
    f.ForceCloseReason = THOST_FTDC_FCC_NotForceClose;
    f.IsAutoSuspend = 0;
    f.OrderPriceType = THOST_FTDC_OPT_LimitPrice;		//***任意价1  限价2***
    f.TimeCondition =  THOST_FTDC_TC_GFD;		//***立即完成1  当日有效3***
    f.VolumeCondition = THOST_FTDC_VC_AV;	//任意数量1  最小数量2  全部成交3
    f.MinVolume = 1;

    strcpy(f.InvestorID, trade->investor);
    strcpy(f.UserID, trade->investor);
    strcpy(f.BrokerID, trade->broker);

    strcpy(f.InstrumentID, instrument);	//合约

    f.LimitPrice = price;				//***价格***

    if(director == 0)
        f.Direction = THOST_FTDC_D_Buy;			//买
    else
        f.Direction = THOST_FTDC_D_Sell;			//卖

    if(offset == 0)
        f.CombOffsetFlag[0] = THOST_FTDC_OF_Open;//开仓
    else if(offset == 1)
        f.CombOffsetFlag[0] = THOST_FTDC_OF_Close;	//平仓
    else
        f.CombOffsetFlag[0] = THOST_FTDC_OF_CloseToday;	//平今

    f.VolumeTotalOriginal = volume;//数量

    sprintf(f.OrderRef, "%d", ++orderRef);//OrderRef

    show(str(boost::format("报单(编号%1%).....") %f.OrderRef), 1);

    ptime = boost::posix_time::microsec_clock::local_time();	//计时
    trade->pUserApi->ReqOrderInsert(&f, trade->iReqID++);	//报单
}
//报单-市价
void ReqOrderInsert(const char* instrument, int director, int offset, int volume)
{
    CThostFtdcInputOrderField f;
    memset(&f, 0, sizeof(f));
    f.CombHedgeFlag[0] = THOST_FTDC_HF_Speculation;	//1投机
    f.ContingentCondition = THOST_FTDC_CC_Immediately;//立即触发
    f.ForceCloseReason = THOST_FTDC_FCC_NotForceClose;
    f.IsAutoSuspend = 0;
    f.OrderPriceType = THOST_FTDC_OPT_AnyPrice;		//***任意价1  限价2***
    f.TimeCondition =  THOST_FTDC_TC_IOC;		//***立即完成1  当日有效3***
    f.VolumeCondition = THOST_FTDC_VC_AV;	//任意数量1  最小数量2  全部成交3
    f.MinVolume = 1;

    strcpy(f.InvestorID, trade->investor);
    strcpy(f.UserID, trade->investor);
    strcpy(f.BrokerID, trade->broker);

    strcpy(f.InstrumentID, instrument);	//合约

    f.LimitPrice = 0;					//***价格***

    if(director == 0)
        f.Direction = THOST_FTDC_D_Buy;			//买
    else
        f.Direction = THOST_FTDC_D_Sell;			//卖

    if(offset == 0)
        f.CombOffsetFlag[0] = THOST_FTDC_OF_Open;//开仓
    else if(offset == 1)
        f.CombOffsetFlag[0] = THOST_FTDC_OF_Close;	//平仓
    else
        f.CombOffsetFlag[0] = THOST_FTDC_OF_CloseToday;	//平今

    f.VolumeTotalOriginal = volume;//数量

    sprintf(f.OrderRef, "%d", ++orderRef);//OrderRef

    show(str(boost::format("报单(编号%1%).....") %f.OrderRef), 1);

    ptime = boost::posix_time::microsec_clock::local_time();	//计时
    trade->pUserApi->ReqOrderInsert(&f, trade->iReqID++);	//报单
}
//连续报单
void pushOrders(int ticks, int seconds, const char* instrument, double price, int director, int offset, int volume)
{
    int slp = 1000 / ticks;
    for(int i = 0; i < ticks * seconds; ++i)
    {
        ReqOrderInsert(instrument, price, director, offset, volume);
        boost::this_thread::sleep(boost::posix_time::millisec(slp));
    }
}

//撤单
void ReqOrderAction(const char* instrument, int session, int frontid, const char* orderref)
{
    CThostFtdcInputOrderActionField f;
    memset(&f, 0, sizeof(f));
    f.ActionFlag = THOST_FTDC_AF_Delete; 	//THOST_FTDC_AF_Modify
    strcpy(f.BrokerID, trade->broker);
    strcpy(f.InvestorID, trade->investor);

    strcpy(f.InstrumentID, instrument);
    f.SessionID = session;
    f.FrontID = frontid;
    strcpy(f.OrderRef, orderref);

    ptime = boost::posix_time::microsec_clock::local_time();	//计时
    trade->pUserApi->ReqOrderAction(&f, ++trade->iReqID);
}

//查持仓
void ReqQryInvestorPosition()
{
    boost::this_thread::sleep(boost::posix_time::millisec(1000));

    CThostFtdcQryInvestorPositionField f;
    memset(&f, 0, sizeof(f));
    strcpy(f.BrokerID, trade->broker);
    strcpy(f.InvestorID, trade->investor);
    trade->pUserApi->ReqQryInvestorPosition(&f, ++trade->iReqID);
}

//查持仓明细
void ReqQryInvestorPositionDetail()
{
    boost::this_thread::sleep(boost::posix_time::millisec(1000));

    CThostFtdcQryInvestorPositionDetailField f;
    memset(&f, 0, sizeof(f));
    strcpy(f.BrokerID, trade->broker);
    strcpy(f.InvestorID, trade->investor);
    trade->pUserApi->ReqQryInvestorPositionDetail(&f, ++trade->iReqID);
}

//查资金
void ReqQryTradingAccount()
{
    boost::this_thread::sleep(boost::posix_time::millisec(1000));

    CThostFtdcQryTradingAccountField f;
    strcpy(f.BrokerID, trade->broker);
    strcpy(f.InvestorID, trade->investor);
    trade->pUserApi->ReqQryTradingAccount(&f, ++trade->iReqID);
}

//查签约银行
void ReqQryAccountregister()
{
    boost::this_thread::sleep(boost::posix_time::millisec(1000));

    CThostFtdcQryAccountregisterField f;
    memset(&f, 0, sizeof(f));
    strcpy(f.BrokerID, trade->broker);
    strcpy(f.AccountID, trade->investor);

    trade->pUserApi->ReqQryAccountregister(&f, ++trade->iReqID);
}

//查银行帐户
void ReqQueryBankAccountMoneyByFuture(const char* bankID, const char* bankPWD, const char* accountPWD)
{
    CThostFtdcReqQueryAccountField f;
    memset(&f, 0, sizeof(f));
    //strcpy(f.TradeCode, "204002");

    strcpy(f.BankID, bankID);
    strcpy(f.BankBranchID, "0000");		//必须有
    strcpy(f.BankPassWord, bankPWD);

    strcpy(f.BrokerID, trade->broker);
    strcpy(f.AccountID, trade->investor);
    strcpy(f.Password, accountPWD);
    f.SecuPwdFlag = THOST_FTDC_BPWDF_BlankCheck;	//明文核对
    strcpy(f.CurrencyID, "RMB"); 					//币种：RMB-人民币 USD-美圆 HKD-港元

    trade->pUserApi->ReqQueryBankAccountMoneyByFuture(&f, ++trade->iReqID);
}

//银转功能
void ReqTransferByFuture(const char* bankID, const char* bankPWD, const char* accountPWD, double amount, bool f2B)
{
    CThostFtdcReqTransferField f;
    memset(&f, 0, sizeof(f));

    strcpy(f.BankID, bankID);
    strcpy(f.BankBranchID, "0000");		//必须有
    strcpy(f.BankPassWord, bankPWD);

    strcpy(f.BrokerID, trade->broker);
    strcpy(f.AccountID, trade->investor);
    strcpy(f.Password, accountPWD);
    f.SecuPwdFlag = THOST_FTDC_BPWDF_BlankCheck;	//明文核对
    strcpy(f.CurrencyID, "RMB"); 					//币种：RMB-人民币 USD-美圆 HKD-港元

    f.TradeAmount = amount;
    if(f2B)	//期转银
        trade->pUserApi->ReqFromFutureToBankByFuture(&f, ++trade->iReqID);
    else	//银转期
        trade->pUserApi->ReqFromBankToFutureByFuture(&f, ++trade->iReqID);
}

//连接
void Trade::OnFrontConnected()
{
    show("登录中...");
    trade->ReqLogin(user, pwd);
}

//断开
void Trade::OnFrontDisconnected(int nReason)
{
    show("交易断开!"+nReason);
}

//心跳
void Trade::OnHeartBeatWarning(int nTimeLapse)
{
}

//认证
void Trade::OnRspAuthenticate(CThostFtdcRspAuthenticateField* pRspAuthenticateField, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
}

//登录
void Trade::OnRspUserLogin(CThostFtdcRspUserLoginField* pRspUserLogin,
                           CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if(IsErrorRspInfo(pRspInfo))
    {
        string msg = str(boost::format("登录错误(%1%):%2%") %pRspInfo->ErrorID % pRspInfo->ErrorMsg);
        show(msg);
    }
    else
    {
        CThostFtdcQrySettlementInfoConfirmField f;
        memset(&f, 0, sizeof(f));
        strcpy(f.BrokerID, broker);
        strcpy(f.InvestorID, user);
        pUserApi->ReqQrySettlementInfoConfirm(&f, ++iReqID);
    }
}

//查结算确认信息
void Trade::OnRspQrySettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField* pSettlementInfoConfirm,
        CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if(this->IsErrorRspInfo(pRspInfo))
    {
        show("查询结算确认错误");
    }
    else
    {
        strcpy(tradingDay, pUserApi->GetTradingDay());
        if((pSettlementInfoConfirm) && strcmp(pSettlementInfoConfirm->ConfirmDate, tradingDay) == 0)
        {
            show("确认结算...");
            CThostFtdcSettlementInfoConfirmField f;
            memset(&f, 0, sizeof(f));
            strcpy(f.BrokerID, broker);
            strcpy(f.InvestorID, user);
            pUserApi->ReqSettlementInfoConfirm(&f, ++iReqID);
        }
        else
        {
            boost::this_thread::sleep(boost::posix_time::millisec(1000));
            show("查结算信息...");
            CThostFtdcQrySettlementInfoField f;
            memset(&f, 0, sizeof(f));
            strcpy(f.BrokerID, broker);
            strcpy(f.InvestorID, user);
            pUserApi->ReqQrySettlementInfo(&f, ++iReqID);
        }
    }
}

//查结算信息
void Trade::OnRspQrySettlementInfo(CThostFtdcSettlementInfoField* pSettlementInfo,
                                   CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if(pSettlementInfo)
        this->settleInfo += pSettlementInfo->Content;
    if(bIsLast)
    {
        show(this->settleInfo, 1);		//用户确认

        show("确认结算...");
        CThostFtdcSettlementInfoConfirmField f;
        memset(&f, 0, sizeof(f));
        strcpy(f.BrokerID, broker);
        strcpy(f.InvestorID, user);
        pUserApi->ReqSettlementInfoConfirm(&f, ++iReqID);
    }
}

//确认结算
void Trade::OnRspSettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField* pSettlementInfoConfirm,
                                       CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    boost::this_thread::sleep(boost::posix_time::millisec(1000));
    show("查合约...");
    CThostFtdcQryInstrumentField f;
    memset(&f, 0, sizeof(f));
    pUserApi->ReqQryInstrument(&f, ++iReqID);
}

//查合约
void Trade::OnRspQryInstrument(CThostFtdcInstrumentField* pInstrument,
                               CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if(!IsErrorRspInfo(pRspInfo))
    {
        char* tmp = new char[strlen(pInstrument->InstrumentID) + 1];
        strcpy(tmp, pInstrument->InstrumentID);
        dicInstrument[string(tmp)] = *pInstrument;	//合约名称标识
    }
    if(bIsLast)
    {
        show("行情登录中...");
        if(this->addrID == -1)	//连接
        {
            char* tmp = new char[256];
            strcpy(tmp, string(this->frontAddr).substr(0, strlen(this->frontAddr)-2).append("13").c_str());
            quote->ReqConnect(tmp, this->broker);
        }
        else
            quote->ReqConnect(addrID);
    }
}

//查持仓响应
void Trade::OnRspQryInvestorPosition(CThostFtdcInvestorPositionField* pInvestorPosition,
                                     CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
	if(pInvestorPosition)
	{
		string positionID = str(boost::format("%1%|%2%|%3%") %pInvestorPosition->InstrumentID
								%pInvestorPosition->PosiDirection %pInvestorPosition->PositionDate);
		dicPosition[positionID] = *pInvestorPosition;
	}

    if(bIsLast)
    {
        string msg = str(boost::format("\n%|1$+12|%|2$+12|%|3$+12|%|4$+12|%|5$+12|%|6$+12|\n")
                         %"合约" %"买卖" %"今昨" %"持仓" %"成本" %"持仓盈亏");
        BOOST_FOREACH(mapPosition::value_type i, dicPosition)
        {
            CThostFtdcInvestorPositionField f = i.second;
            msg += str(boost::format("%|1$+11|%|2$+11|%|3$+11|%|4$+11|%|5$+11|%|6$+11|\n")
                       %f.InstrumentID %(f.PosiDirection == THOST_FTDC_PD_Long?"多":"空")
                       %(f.PositionDate == THOST_FTDC_PSD_History?"昨仓":"今仓") %f.Position
                       %(f.PositionCost / dicInstrument[string(pInvestorPosition->InstrumentID)].VolumeMultiple)
                       %f.PositionProfit);
        }
        show(msg, 1);
    }
}

//查持仓明细
void Trade::OnRspQryInvestorPositionDetail(CThostFtdcInvestorPositionDetailField* pInvestorPositionDetail,
										CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if(pInvestorPositionDetail)
    {
        string id = str(boost::format("%1%") %pInvestorPositionDetail->TradeID);
        dicPositionDetail[id] = *pInvestorPositionDetail;
    }
    if(bIsLast)
    {
        dicPosition.clear();
        string msg = str(boost::format("\n%|1$+22|%|2$+12|%|3$+12|%|4$+12|%|5$+12|%|6$+12|%|7$+12|\n")
                         %"成交编号" %"合约" %"买卖" %"今昨" %"数量" %"开仓价" %"持仓盈亏");
        BOOST_FOREACH(mapPositionDetail::value_type i, dicPositionDetail)
        {
            CThostFtdcInvestorPositionDetailField f = i.second;
            msg += str(boost::format("%|1$+21|%|2$+11|%|3$+11|%|4$+11|%|5$+11|%|6$+11|%|7$+11|\n")
                       %f.TradeID %f.InstrumentID %(f.Direction == THOST_FTDC_D_Buy?"买":"卖")
                       %(f.OpenDate == tradingDay?"今仓":"昨仓") %f.Volume
                       %f.OpenPrice %f.PositionProfitByDate);

            //持仓汇总
            double multi = dicInstrument[string(f.InstrumentID)].VolumeMultiple;
            string positionID = str(boost::format("%1%|%2%|%3%") %f.InstrumentID
                                    %f.Direction %(strcmp(f.OpenDate, tradingDay)==0));
            mapPosition::iterator iter = dicPosition.find(positionID);
            CThostFtdcInvestorPositionField pf;
            if(iter == dicPosition.end())
            {
                memset(&pf, 0, sizeof(pf));
                strcpy(pf.InstrumentID, f.InstrumentID);
                pf.PosiDirection = (f.Direction == THOST_FTDC_D_Buy ? THOST_FTDC_PD_Long: THOST_FTDC_PD_Short);
                pf.PositionDate = (strcmp(f.OpenDate, tradingDay) == 0? THOST_FTDC_PSD_Today : THOST_FTDC_PSD_History);
                pf.Position = 0;//f.Volume;
                pf.PositionCost = 0;//f.OpenPrice;
                pf.PositionProfit = 0;//f.PositionProfitByDate
                pf.TodayPosition = 0;
                pf.YdPosition = 0;

            }
            else
            {
                pf = dicPosition[positionID];
            }

            pf.Position  += f.Volume;
            if(pf.PositionDate == THOST_FTDC_PSD_History)
            {
                pf.YdPosition += f.Volume;
                pf.PositionCost += f.Volume * f.LastSettlementPrice * multi;
                //持仓盈亏需要自己运算detail始终为0
                pf.PositionProfit += (f.Direction == THOST_FTDC_PD_Long? 1 : -1) *
                                     (dicTick[f.InstrumentID].LastPrice - f.LastSettlementPrice) * f.Volume * multi;
            }
            else
            {
                pf.TodayPosition += f.Volume;
                pf.PositionCost += f.Volume * f.OpenPrice * multi;
                //持仓盈亏需要自己运算detail始终为0
                pf.PositionProfit += (f.Direction == THOST_FTDC_PD_Long? 1 : -1) *
                                     (dicTick[f.InstrumentID].LastPrice - f.OpenPrice) * f.Volume * multi;
            }

            dicPosition[positionID] = pf;
        }
        show(msg, 1);

        //显示持仓汇总
        msg = str(boost::format("\n%|1$+12|%|2$+12|%|3$+12|%|4$+12|%|5$+12|%|6$+12|\n")
                  %"合约" %"买卖" %"今昨" %"持仓" %"成本" %"持仓盈亏");
        BOOST_FOREACH(mapPosition::value_type i, dicPosition)
        {
            CThostFtdcInvestorPositionField& f = i.second;
            msg += str(boost::format("%|1$+11|%|2$+11|%|3$+11|%|4$+11|%|5$+11|%|6$+11|\n")
                       %f.InstrumentID %(f.PosiDirection == THOST_FTDC_PD_Long?"多":"空")
                       %(f.PositionDate == THOST_FTDC_PSD_History?"昨仓":"今仓") %f.Position
                       %(f.PositionCost / f.Position / dicInstrument[string(f.InstrumentID)].VolumeMultiple) %f.PositionProfit);
        }
        show(msg, 1);
    }
}

//查资金
void Trade::OnRspQryTradingAccount(CThostFtdcTradingAccountField* pTradingAccount,
                                   CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if(bIsLast)
    {
        //静态权益=上日结算-出金金额+入金金额
        double preBalance = pTradingAccount->PreBalance - pTradingAccount->Withdraw + pTradingAccount->Deposit;
        //动态权益=静态权益+ 平仓盈亏+ 持仓盈亏- 手续费
        double current = preBalance
                         + pTradingAccount->CloseProfit + pTradingAccount->PositionProfit - pTradingAccount->Commission;
        string msg = str(boost::format("\n%|1$15|%|2$15|%|3$15|%|4$15|%|5$15|%|6$15|%|7$15|%|8$15|\n")
                         %"可用资金" %"平仓盈亏" %"持仓盈亏" %"静态权益" %"动态权益" %"占用保证金" %"冻结资金" %"风险度");
        msg += str(boost::format("%|1$14.2f|%|2$14.2f|%|3$14.2f|%|4$14.2f|%|5$14.2f|%|6$14.2f|%|7$14.2f|%|8$14.2f|%%")
                   %pTradingAccount->Available %pTradingAccount->CloseProfit %pTradingAccount->PositionProfit
                   %preBalance %current %pTradingAccount->CurrMargin
                   %(pTradingAccount->FrozenMargin + pTradingAccount->FrozenCommission)
                   %(current == 0? 0 : (pTradingAccount->CurrMargin / current * 100)));
        show(msg, 1);
    }
}

//报单响应
void Trade::OnRtnOrder(CThostFtdcOrderField* pOrder)
{
	if(boost::lexical_cast<int>(pOrder->OrderRef) > orderRef) 	//旧响应
		show(str(boost::format("报单响应(%1%),Broker编号(%2%),状态:%3%") % pOrder->OrderRef %pOrder->BrokerOrderSeq %pOrder->StatusMsg), 1);
    else
	{
		boost::posix_time::time_duration diff = boost::posix_time::microsec_clock::local_time()-ptime;
		show(str(boost::format("报单响应(%1%),Broker编号(%2%),响应时间%4%毫秒,状态:%3%")
				%pOrder->OrderRef %pOrder->BrokerOrderSeq %pOrder->StatusMsg %(diff.total_nanoseconds()/1000000.0)), 1);
	}

    string id = str(boost::format("%1%|%2%|%3%|%4%") %pOrder->InstrumentID %pOrder->SessionID %pOrder->FrontID %pOrder->OrderRef);
    dicOrder[id] = *pOrder;
}

//成交响应
void Trade::OnRtnTrade(CThostFtdcTradeField* pTrade)
{
    show(str(boost::format("成交编号:%1%, 平台编号%2%, 成交时间%3%")%pTrade->TradeID %pTrade->BrokerOrderSeq %pTrade->TradeTime), 2);
}

//报单错误
void Trade::OnRspOrderInsert(CThostFtdcInputOrderField* pInputOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    show(pRspInfo->ErrorMsg, 2);
}

//报单错误
void Trade::OnErrRtnOrderInsert(CThostFtdcInputOrderField* pInputOrder, CThostFtdcRspInfoField* pRspInfo)
{
    show(pRspInfo->ErrorMsg, 2);
}

//撤单错误
void Trade::OnRspOrderAction(CThostFtdcInputOrderActionField* pInputOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    show(pRspInfo->ErrorMsg, 2);
}

//签约银行
void Trade::OnRspQryAccountregister(CThostFtdcAccountregisterField* pAccountregister,
                                    CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if(IsErrorRspInfo(pRspInfo))
        show(str(boost::format("查签约银行错误:%1%") %pRspInfo->ErrorMsg));
    else if(pAccountregister)
    {
        string bank = "";
        if(pAccountregister->BankID[0] == THOST_FTDC_BF_ABC)
            bank = "农业银行";
        else if(pAccountregister->BankID[0] == THOST_FTDC_BF_BC)
            bank = "中国银行";
        else if(pAccountregister->BankID[0] == THOST_FTDC_BF_BOC)
            bank = "交通银行";
        else if(pAccountregister->BankID[0] == THOST_FTDC_BF_CBC)
            bank = "建设银行";
        else if(pAccountregister->BankID[0] == THOST_FTDC_BF_ICBC)
            bank = "工商银行";
        else if(pAccountregister->BankID[0] == THOST_FTDC_BF_Other)
            bank = "其他银行";

        string bankID = string(pAccountregister->BankAccount);
        bankID = bankID.substr(strlen(pAccountregister->BankAccount)-4, 4);
        show(str(boost::format("%1%.%2%(****%3%)") %pAccountregister->BankID[0] % bank
                 %bankID), 3);
    }
    else
		show("无签约银行!", 1);
}

//查银行帐户响应
void Trade::OnRtnQueryBankBalanceByFuture(CThostFtdcNotifyQueryAccountField* pNotifyQueryAccount)
{
    show(str(boost::format("可用余额:%1%, 可取余额:%2%")%pNotifyQueryAccount->BankUseAmount
             %pNotifyQueryAccount->BankFetchAmount), 1);
}

//查银行帐户错误
void Trade::OnRspQueryBankAccountMoneyByFuture(CThostFtdcReqQueryAccountField* pReqQueryAccount, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if(IsErrorRspInfo(pRspInfo))
        show(str(boost::format("查询银行帐号错误:%1%") %pRspInfo->ErrorMsg), 1);
    else
        show(pReqQueryAccount->Digest, 1);
}

//查银行帐户错误
void Trade::OnErrRtnQueryBankBalanceByFuture(CThostFtdcReqQueryAccountField* pReqQueryAccount, CThostFtdcRspInfoField* pRspInfo)
{
    show(str(boost::format("查银行余额错误:%1%")%pRspInfo->ErrorMsg), 1);
}

//期->银
void Trade::OnRtnFromFutureToBankByFuture(CThostFtdcRspTransferField* pRspTransfer)
{
    if(pRspTransfer->ErrorID == 0)
        show("期货转银行成功!", 1);
    else
        show(str(boost::format("期货转银行失败:%1%") %pRspTransfer->ErrorMsg), 1);
}

//期->银错误
void Trade::OnErrRtnFutureToBankByFuture(CThostFtdcReqTransferField* pReqTransfer, CThostFtdcRspInfoField* pRspInfo)
{
    show(str(boost::format("期货转银行失败:%1%") %pRspInfo->ErrorMsg), 1);
}

//期->银错误
void Trade::OnRspFromFutureToBankByFuture(CThostFtdcReqTransferField* pReqTransfer, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    show(str(boost::format("期货转银行失败:%1%") %pRspInfo->ErrorMsg), 1);
}

//银->期
void Trade::OnRtnFromBankToFutureByFuture(CThostFtdcRspTransferField* pRspTransfer)
{
    if(pRspTransfer->ErrorID == 0)
        show("银行转期货成功!", 1);
    else
        show(str(boost::format("银行转期货失败:%1%") %pRspTransfer->ErrorMsg), 1);
}

//银->期错误
void Trade::OnErrRtnBankToFutureByFuture(CThostFtdcReqTransferField* pReqTransfer, CThostFtdcRspInfoField* pRspInfo)
{
    show(str(boost::format("银行转期货失败:%1%") %pRspInfo->ErrorMsg), 1);
}

//银->期错误
void Trade::OnRspFromBankToFutureByFuture(CThostFtdcReqTransferField* pReqTransfer, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    show(str(boost::format("银行转期货失败:%1%") %pRspInfo->ErrorMsg), 1);
}

//(*交易响应事件
void Trade::OnRspUserLogout(CThostFtdcUserLogoutField* pUserLogout, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
}

void Trade::OnRspUserPasswordUpdate(CThostFtdcUserPasswordUpdateField* pUserPasswordUpdate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
}

void Trade::OnRspTradingAccountPasswordUpdate(CThostFtdcTradingAccountPasswordUpdateField* pTradingAccountPasswordUpdate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
}

void Trade::OnRspParkedOrderInsert(CThostFtdcParkedOrderField* pParkedOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
}

void Trade::OnRspParkedOrderAction(CThostFtdcParkedOrderActionField* pParkedOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
}

void Trade::OnRspQueryMaxOrderVolume(CThostFtdcQueryMaxOrderVolumeField* pQueryMaxOrderVolume, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
}

void Trade::OnRspRemoveParkedOrder(CThostFtdcRemoveParkedOrderField* pRemoveParkedOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
}

void Trade::OnRspRemoveParkedOrderAction(CThostFtdcRemoveParkedOrderActionField* pRemoveParkedOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
}

void Trade::OnRspQryOrder(CThostFtdcOrderField* pOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
}

void Trade::OnRspQryTrade(CThostFtdcTradeField* pTrade, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
}

void Trade::OnRspQryInvestor(CThostFtdcInvestorField* pInvestor, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
}

void Trade::OnRspQryTradingCode(CThostFtdcTradingCodeField* pTradingCode, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
}

void Trade::OnRspQryInstrumentMarginRate(CThostFtdcInstrumentMarginRateField* pInstrumentMarginRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
}

void Trade::OnRspQryInstrumentCommissionRate(CThostFtdcInstrumentCommissionRateField* pInstrumentCommissionRate, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
}

void Trade::OnRspQryExchange(CThostFtdcExchangeField* pExchange, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
}

void Trade::OnRspQryDepthMarketData(CThostFtdcDepthMarketDataField* pDepthMarketData, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
}

void Trade::OnRspQryTransferBank(CThostFtdcTransferBankField* pTransferBank, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
}

void Trade::OnRspQryNotice(CThostFtdcNoticeField* pNotice, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
}

void Trade::OnRspQryInvestorPositionCombineDetail(CThostFtdcInvestorPositionCombineDetailField* pInvestorPositionCombineDetail, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
}

void Trade::OnRspQryCFMMCTradingAccountKey(CThostFtdcCFMMCTradingAccountKeyField* pCFMMCTradingAccountKey, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
}

void Trade::OnRspQryEWarrantOffset(CThostFtdcEWarrantOffsetField* pEWarrantOffset, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
}

void Trade::OnRspQryTransferSerial(CThostFtdcTransferSerialField* pTransferSerial, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
}

void Trade::OnRspError(CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
}

void Trade::OnErrRtnOrderAction(CThostFtdcOrderActionField* pOrderAction, CThostFtdcRspInfoField* pRspInfo)
{
}

void Trade::OnRtnInstrumentStatus(CThostFtdcInstrumentStatusField* pInstrumentStatus)
{
}

void Trade::OnRtnTradingNotice(CThostFtdcTradingNoticeInfoField* pTradingNoticeInfo)
{
}

void Trade::OnRtnErrorConditionalOrder(CThostFtdcErrorConditionalOrderField* pErrorConditionalOrder)
{
}

void Trade::OnRspQryContractBank(CThostFtdcContractBankField* pContractBank, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
}

void Trade::OnRspQryParkedOrder(CThostFtdcParkedOrderField* pParkedOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
}

void Trade::OnRspQryParkedOrderAction(CThostFtdcParkedOrderActionField* pParkedOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
}

void Trade::OnRspQryTradingNotice(CThostFtdcTradingNoticeField* pTradingNotice, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
}

void Trade::OnRspQryBrokerTradingParams(CThostFtdcBrokerTradingParamsField* pBrokerTradingParams, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
}

void Trade::OnRspQryBrokerTradingAlgos(CThostFtdcBrokerTradingAlgosField* pBrokerTradingAlgos, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
}

void Trade::OnRtnFromBankToFutureByBank(CThostFtdcRspTransferField* pRspTransfer)
{
}

void Trade::OnRtnFromFutureToBankByBank(CThostFtdcRspTransferField* pRspTransfer)
{
}

void Trade::OnRtnRepealFromBankToFutureByBank(CThostFtdcRspRepealField* pRspRepeal)
{
}

void Trade::OnRtnRepealFromFutureToBankByBank(CThostFtdcRspRepealField* pRspRepeal)
{
}

void Trade::OnRtnRepealFromBankToFutureByFutureManual(CThostFtdcRspRepealField* pRspRepeal)
{
}

void Trade::OnRtnRepealFromFutureToBankByFutureManual(CThostFtdcRspRepealField* pRspRepeal)
{
}

void Trade::OnErrRtnRepealBankToFutureByFutureManual(CThostFtdcReqRepealField* pReqRepeal, CThostFtdcRspInfoField* pRspInfo)
{
}

void Trade::OnErrRtnRepealFutureToBankByFutureManual(CThostFtdcReqRepealField* pReqRepeal, CThostFtdcRspInfoField* pRspInfo)
{
}

void Trade::OnRtnRepealFromBankToFutureByFuture(CThostFtdcRspRepealField* pRspRepeal)
{
}

void Trade::OnRtnRepealFromFutureToBankByFuture(CThostFtdcRspRepealField* pRspRepeal)
{
}

void Trade::OnRtnOpenAccountByBank(CThostFtdcOpenAccountField* pOpenAccount)
{
}

void Trade::OnRtnCancelAccountByBank(CThostFtdcCancelAccountField* pCancelAccount)
{
}

void Trade::OnRtnChangeAccountByBank(CThostFtdcChangeAccountField* pChangeAccount)
{
}
//*)

//(*行情响应

void Quote::OnRspError(CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
}

void Quote::OnFrontConnected()
{
    this->ReqLogin(user, pwd);
}

void Quote::OnFrontDisconnected(int nReason)
{
    show("行情断开！");
}

void Quote::OnHeartBeatWarning(int nTimeLapse)
{
}

void Quote::OnRspUserLogin(CThostFtdcRspUserLoginField* pRspUserLogin,
                           CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if(IsErrorRspInfo(pRspInfo))
        show(str(boost::format("登录错误:%1%") %pRspInfo->ErrorMsg));
    else
    {
    	show("行情登录成功!"); 	//
//        show("行情登录成功, 订阅行情！");
//
//        char* tmp[1] = {new char[256]};
//        BOOST_FOREACH(mapInstrument::value_type i, dicInstrument)
//        {
//            strcpy(tmp[0], i.first.c_str());
//            pUserApi->SubscribeMarketData(tmp, 1);
//        }
    }
}

void Quote::OnRspSubMarketData(CThostFtdcSpecificInstrumentField* pSpecificInstrument, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
}

void Quote::OnRspUnSubMarketData(CThostFtdcSpecificInstrumentField* pSpecificInstrument, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
}
//*)

//深度行情响应
void Quote::OnRtnDepthMarketData(CThostFtdcDepthMarketDataField* pDepthMarketData)
{
    CThostFtdcDepthMarketDataField field;
    memset(&field, 0, sizeof(field));
    field = *pDepthMarketData;

    boost::thread tExecTick(&tickToFile, field);	//启线程
}

//tick写入文本
void tickToFile(CThostFtdcDepthMarketDataField f)
{
    //合法合约//合法数据
    if(dicInstrument.find(f.InstrumentID) != dicInstrument.end() && f.LastPrice < f.UpperLimitPrice)
    {
        CThostFtdcInstrumentField instField;
        memset(&instField, 0, sizeof(instField));
        instField = dicInstrument[string(f.InstrumentID)];	//合约信息

        strcpy(f.TradingDay, tradingDay);			//日期
        strcpy(f.ExchangeID, instField.ExchangeID);	//交易所

        if(f.AskPrice1 > f.UpperLimitPrice)	//单边有挂边的情况
            f.AskPrice1 = f.LastPrice;
        if(f.BidPrice1 > f.UpperLimitPrice)
            f.BidPrice1 = f.LastPrice;

        if(instField.ExchangeID == "CZCE") //成交额与均价
            f.Turnover *= instField.VolumeMultiple;
        else
            f.AveragePrice /= instField.VolumeMultiple;

        dicTick[string(f.InstrumentID)] = f;	//更新Tick

		return;
		//============ 文本记录 ===========//
        //cout << f.TradingDay << endl;
        boost::filesystem::path current_path = boost::filesystem::current_path();

        boost::filesystem::path file_path = current_path / f.TradingDay; //boost:format("%1%\\%2%\\%3%")%current_path.c_str()%f.TradingDay%"testfile";
        //boost::posix_time::ptime ptime = boost::posix_time::second_clock::local_time();

        if (!boost::filesystem::exists(file_path))
        {
            boost::filesystem::create_directory(file_path);
        }
        //TradingDay,InstrumentID,LastPrice,UpperLimitPrice,LowerLimitPrice,Volume,Turnover,OpenInterest,UpdateTime,UpdateMillisec,
        //BidPrice1,BidVolume1,AskPrice1,AskVolume1,AveragePrice,ticktime

        string file = file_path.string() + "//" + f.InstrumentID;
        boost::filesystem::ofstream out(file.c_str(), ios::app);
        out << boost::format("%1%,%2%,%3%,%4%,%5%,%6%,%7%,%8%,%9%,%10%,%11%,%12%,%13%,%14%,%15%,%16% %17%.%18%")
            % f.InstrumentID % f.InstrumentID % f.LastPrice % f.UpperLimitPrice
            % f.LowerLimitPrice % f.Volume % f.Turnover % f.OpenInterest
            % f.UpdateTime %  f.UpdateMillisec % f.BidPrice1 %  f.BidVolume1
            % f.AskPrice1 % f.AskVolume1 % f.AveragePrice % f.TradingDay % f.UpdateTime % f.UpdateMillisec << endl;
        //cout << boost::format("%1%->%2%.%3") %f.InstrumentID % f.UpdateTime % f.UpdateMillisec << endl;
        out.close();
    }
}


//登录
void FrameMain::OnButtonLoginClick(wxCommandEvent& event)
{
    this->ButtonLogin->Enable(false);
    strcpy(user, this->TextCtrlInvestor->GetValue().mb_str());
    strcpy(pwd,this->TextCtrlPassWord->GetValue().mb_str());

    show("交易接口连接中...");
    if(this->ChoiceFront->GetLabelText().mb_str() == "其它")
	{
		char* addr = new char[128];
		char* broker = new char[128];
		strcpy(addr, this->TextCtrlOther->GetValue().mb_str());
		strcpy(broker, this->TextCtrlBroker->GetValue().mb_str());
		trade->ReqConnect(addr, broker);
	}
	else
		trade->ReqConnect(this->ChoiceFront->GetCurrentSelection());
}

//查持仓
void FrameMain::OnButtonQryPositionClick(wxCommandEvent& event)
{
    ReqQryInvestorPosition();
}

//查资金
void FrameMain::OnButtonReqQryAccountClick(wxCommandEvent& event)
{
    ReqQryTradingAccount();
}

//查签约银行
void FrameMain::OnButtonQryBanksClick(wxCommandEvent& event)
{
    ReqQryAccountregister();
}

//查银行帐户
void FrameMain::OnButtonQryBankClick(wxCommandEvent& event)
{
    ReqQueryBankAccountMoneyByFuture(string(this->ChoiceBanks->GetLabel().mb_str()).substr(0,1).c_str(),
                                     this->TextCtrlBankPwd->GetLabel().mb_str(), this->TextCtrlAccountPwd->GetLabel().mb_str());
}

//期->银
void FrameMain::OnButtonFuture2BankClick(wxCommandEvent& event)
{
    ReqTransferByFuture(string(this->ChoiceBanks->GetLabel().mb_str()).substr(0,1).c_str(),
                        this->TextCtrlBankPwd->GetLabel().mb_str(),	this->TextCtrlAccountPwd->GetLabel().mb_str(),
                        this->SpinCtrlMoney->GetValue(), true);
}

//银->期
void FrameMain::OnButtonBank2FutureClick(wxCommandEvent& event)
{
    ReqTransferByFuture(string(this->ChoiceBanks->GetLabel().mb_str()).substr(0,1).c_str(),
                        this->TextCtrlBankPwd->GetLabel().mb_str(),	this->TextCtrlAccountPwd->GetLabel().mb_str(),
                        this->SpinCtrlMoney->GetValue(), false);
}

//下单
void FrameMain::OnButtonOrderInsertClick(wxCommandEvent& event)
{
    int offset = this->ChoiceOffset->GetCurrentSelection();
    if(offset == 2)	//平今3
        offset = 3;
    ReqOrderInsert(this->ComboBoxInstrument->GetValue().mb_str(), this->SpinCtrlPrice->GetValue(),
                   this->ChoiceDirector->GetCurrentSelection(), offset, this->SpinCtrlVolume->GetValue());
}

//连续报单
void FrameMain::OnButtonOrderContinueClick(wxCommandEvent& event)
{
    int offset = this->ChoiceOffset->GetCurrentSelection();
    if(offset == 2)	//平今3
        offset = 3;
    boost::thread trd(&pushOrders, this->SpinCtrlTicks->GetValue(), this->SpinCtrlSeconds->GetValue(),
                      this->ComboBoxInstrument->GetValue().mb_str(), this->SpinCtrlPrice->GetValue(),
                      this->ChoiceDirector->GetCurrentSelection(), offset, this->SpinCtrlVolume->GetValue());
}

//撤单
void FrameMain::OnButtonOrderActionClick(wxCommandEvent& event)
{
    vector<string> v(3);
    string tmp = string(this->ChoiceBrokerSeq->GetLabel().mb_str());
    boost::algorithm::split(v, tmp, is_any_of("|"));
    ReqOrderAction(v[0].c_str(), atoi(v[1].c_str()), atoi(v[2].c_str()), v.back().c_str());
}

//选择合约：修改最大允许下单
void FrameMain::OnComboBoxInstrumentSelected(wxCommandEvent& event)
{
    CThostFtdcInstrumentField f = dicInstrument[string(this->ComboBoxInstrument->GetValue().mb_str(wxConvLibc))];
    this->SpinCtrlVolume->SetMax(f.MaxLimitOrderVolume);
}

//显示信息
void FrameMain::showMsg(wxString msg, int status = 0)
{
    if(status == 0)
    {
        this->StatusBar1->SetStatusText(msg, 0);
        if(msg.Index(_("登录错误")) != wxNOT_FOUND || msg.Index(_("登录成功")) != wxNOT_FOUND)
        {
            this->ButtonLogin->Enable(true);
            this->Panel2->Enable(true);
            this->Panel3->Enable(true);
        }
    }
    else
    {
        if(status == 3)	//查银行
        {
            if(this->ChoiceBanks->FindString(msg) == wxNOT_FOUND)
            {
                this->ChoiceBanks->Append(msg);
                this->ChoiceBanks->SetSelection(this->ChoiceBanks->GetCount() - 1);
            }
        }
        msg.append(_T("\r\n"));

        this->RichTextCtrlMsg->AppendText(msg);
        this->RichTextCtrlMsg->ScrollLines(this->RichTextCtrlMsg->GetNumberOfLines());		//光标移至最后
    }
}

//定时刷新界面
void FrameMain::OnTimer1Trigger(wxTimerEvent& event)
{
    //(*合约列表
    if(this->ComboBoxInstrument->GetCount() < dicInstrument.size())
    {
        this->ComboBoxInstrument->Clear();
        BOOST_FOREACH(mapInstrument::value_type i, dicInstrument)
        {
            this->ComboBoxInstrument->Append(wxString(i.first.c_str(), wxConvLibc));
        }
    }
    //*)
    //消息输出
    for(list<string>::iterator iter = msgs.begin(); iter != msgs.end(); ++iter)
    {
        string tmp = (string)*iter;
        int status = boost::lexical_cast<int >(tmp[0]);
//        if(tmp.c_str()[0] == '1')
//            status = 1;
//        else if(tmp.c_str()[0] == '2')
//            status = 2;
        tmp = tmp.substr(1);
        this->showMsg(wxString(tmp.c_str(), wxConvLibc), status);
    }
    msgs.clear();

    //报单
    BOOST_FOREACH(mapOrder::value_type i, dicOrder)
    {
        wxString tmp = wxString(i.first.c_str(), wxConvLibc);
        if(this->ChoiceBrokerSeq->FindString(tmp) == wxNOT_FOUND)
            this->ChoiceBrokerSeq->Append(tmp);
    }

    //更新价格
    if(this->CheckBoxPriceType->GetValue() && !this->ComboBoxInstrument->GetValue().IsEmpty() && !this->ComboBoxInstrument->GetValue().IsNull())
    {
        string instrument = string(this->ComboBoxInstrument->GetValue().mb_str());

        if(dicTick.find(instrument) == dicTick.end()) //未订阅行情
        {
        	char* tmp[1] = {new char[256]};
            strcpy(tmp[0], instrument.c_str());
            quote->pUserApi->SubscribeMarketData(tmp, 1);
        }
        else
        {
            CThostFtdcDepthMarketDataField f = dicTick[instrument];
            ostringstream ss;
            ss << f.LastPrice;
            string tmp = ss.str();
            //sprintf(tmp, "%.2f", dicTick[instrument].LastPrice);
            //this->StaticTextLastPrice->SetLabel(wxString(tmp.c_str(), wxConvLibc));
            this->SpinCtrlPrice->SetMin(f.LowerLimitPrice);
            this->SpinCtrlPrice->SetMax(f.UpperLimitPrice);
            this->SpinCtrlPrice->SetValue(wxString(tmp.c_str(), wxConvLibc));
        }
    }
}


void FrameMain::OnButtonQryDetailClick(wxCommandEvent& event)
{
    ReqQryInvestorPositionDetail();
}

void FrameMain::OnChoiceFrontSelect(wxCommandEvent& event)
{
	string tmp = string(this->ChoiceFront->GetLabel().mb_str());
	if(tmp == "其它")
	{
		this->TextCtrlOther->Enable();
		this->TextCtrlBroker->Enable();
	}
	else
	{
		this->TextCtrlOther->Enable(false);
		this->TextCtrlBroker->Enable(false);
	}
}
