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
    ChoiceFront->SetSelection( ChoiceFront->Append(_("ģ��")) );
    ChoiceFront->Append(_("�Ϻ�����1"));
    ChoiceFront->Append(_("�Ϻ���ͨ1"));
    ChoiceFront->Append(_("�Ϻ�����2"));
    ChoiceFront->Append(_("�Ϻ���ͨ2"));
    ChoiceFront->Append(_("���ݵ���1"));
    ChoiceFront->Append(_("������ͨ1"));
    ChoiceFront->Append(_("���ݵ���2"));
    ChoiceFront->Append(_("������ͨ2"));
    ChoiceFront->Append(_("������ͨ1"));
    ChoiceFront->Append(_("������ͨ2"));
    ChoiceFront->Append(_("���ڵ���1"));
    ChoiceFront->Append(_("���ڵ���2"));
    ChoiceFront->Append(_("�̺��ѯ"));
    ChoiceFront->Append(_("����"));
    TextCtrlInvestor = new wxTextCtrl(Panel1, ID_TEXTCTRL1, _("�ʺ�"), wxPoint(384,8), wxSize(88,22), 0, wxDefaultValidator, _T("ID_TEXTCTRL1"));
    TextCtrlPassWord = new wxTextCtrl(Panel1, ID_TEXTCTRL2, wxEmptyString, wxPoint(472,8), wxSize(72,22), wxTE_PASSWORD, wxDefaultValidator, _T("ID_TEXTCTRL2"));
    ButtonLogin = new wxButton(Panel1, ID_BUTTON1, _("��¼"), wxPoint(544,8), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON1"));
    TextCtrlOther = new wxTextCtrl(Panel1, ID_TEXTCTRL5, _("����"), wxPoint(112,8), wxSize(200,22), 0, wxDefaultValidator, _T("ID_TEXTCTRL5"));
    TextCtrlOther->Disable();
    TextCtrlBroker = new wxTextCtrl(Panel1, ID_TEXTCTRL6, _("Broker"), wxPoint(312,8), wxSize(72,22), 0, wxDefaultValidator, _T("ID_TEXTCTRL6"));
    TextCtrlBroker->Disable();
    Panel2 = new wxPanel(this, ID_PANEL2, wxPoint(24,56), wxSize(624,72), wxTAB_TRAVERSAL, _T("ID_PANEL2"));
    ComboBoxInstrument = new wxComboBox(Panel2, ID_COMBOBOX1, wxEmptyString, wxPoint(8,8), wxSize(112,22), 0, 0, wxCB_SORT, wxDefaultValidator, _T("ID_COMBOBOX1"));
    SpinCtrlPrice = new wxSpinCtrl(Panel2, ID_SPINCTRL1, _T("0"), wxPoint(128,8), wxSize(88,22), 0, 0, 10000, 0, _T("ID_SPINCTRL1"));
    SpinCtrlPrice->SetValue(_T("0"));
    CheckBoxPriceType = new wxCheckBox(Panel2, ID_CHECKBOX1, _("���̼�"), wxPoint(216,8), wxSize(56,24), 0, wxDefaultValidator, _T("ID_CHECKBOX1"));
    CheckBoxPriceType->SetValue(true);
    ChoiceDirector = new wxChoice(Panel2, ID_CHOICE2, wxPoint(272,8), wxSize(56,22), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE2"));
    ChoiceDirector->SetSelection( ChoiceDirector->Append(_("��")) );
    ChoiceDirector->Append(_("��"));
    ChoiceOffset = new wxChoice(Panel2, ID_CHOICE3, wxPoint(336,8), wxSize(72,22), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE3"));
    ChoiceOffset->SetSelection( ChoiceOffset->Append(_("����")) );
    ChoiceOffset->Append(_("ƽ��"));
    ChoiceOffset->Append(_("ƽ��"));
    SpinCtrlVolume = new wxSpinCtrl(Panel2, ID_SPINCTRL2, _T("1"), wxPoint(416,8), wxSize(72,22), 0, 1, 1000, 1, _T("ID_SPINCTRL2"));
    SpinCtrlVolume->SetValue(_T("1"));
    ButtonOrderInsert = new wxButton(Panel2, ID_BUTTON2, _("�µ�"), wxPoint(496,8), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON2"));
    StaticText1 = new wxStaticText(Panel2, ID_STATICTEXT1, _("ÿ�뷢��"), wxPoint(280,48), wxSize(48,14), 0, _T("ID_STATICTEXT1"));
    SpinCtrlTicks = new wxSpinCtrl(Panel2, ID_SPINCTRL3, _T("6"), wxPoint(328,40), wxSize(56,22), 0, 1, 1000, 6, _T("ID_SPINCTRL3"));
    SpinCtrlTicks->SetValue(_T("6"));
    StaticText2 = new wxStaticText(Panel2, ID_STATICTEXT2, _("��, ����"), wxPoint(384,48), wxSize(44,16), 0, _T("ID_STATICTEXT2"));
    SpinCtrlSeconds = new wxSpinCtrl(Panel2, ID_SPINCTRL4, _T("3"), wxPoint(432,40), wxSize(48,22), 0, 1, 1000, 3, _T("ID_SPINCTRL4"));
    SpinCtrlSeconds->SetValue(_T("3"));
    StaticText3 = new wxStaticText(Panel2, ID_STATICTEXT3, _("��"), wxPoint(480,48), wxSize(16,16), wxALIGN_LEFT, _T("ID_STATICTEXT3"));
    ButtonOrderContinue = new wxButton(Panel2, ID_BUTTON3, _("��������"), wxPoint(496,40), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON3"));
    ButtonQryPosition = new wxButton(Panel2, ID_BUTTON4, _("��ֲ�"), wxPoint(8,40), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON4"));
    ButtonReqQryAccount = new wxButton(Panel2, ID_BUTTON5, _("���ʽ�"), wxPoint(96,40), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON5"));
    ButtonQryDetail = new wxButton(Panel2, ID_BUTTON11, _("��ֲ���ϸ"), wxPoint(184,40), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON11"));
    Panel3 = new wxPanel(this, ID_PANEL3, wxPoint(24,176), wxSize(584,72), wxTAB_TRAVERSAL, _T("ID_PANEL3"));
    StaticText4 = new wxStaticText(Panel3, ID_STATICTEXT4, _("����"), wxPoint(8,16), wxDefaultSize, 0, _T("ID_STATICTEXT4"));
    ChoiceBanks = new wxChoice(Panel3, ID_CHOICE4, wxPoint(32,8), wxSize(368,22), 0, 0, 0, wxDefaultValidator, _T("ID_CHOICE4"));
    StaticText5 = new wxStaticText(Panel3, ID_STATICTEXT5, _("�ʽ�����"), wxPoint(8,48), wxDefaultSize, 0, _T("ID_STATICTEXT5"));
    TextCtrlAccountPwd = new wxTextCtrl(Panel3, ID_TEXTCTRL3, wxEmptyString, wxPoint(56,40), wxSize(104,22), wxTE_PASSWORD, wxDefaultValidator, _T("ID_TEXTCTRL3"));
    StaticText6 = new wxStaticText(Panel3, ID_STATICTEXT6, _("��������"), wxPoint(168,48), wxDefaultSize, 0, _T("ID_STATICTEXT6"));
    TextCtrlBankPwd = new wxTextCtrl(Panel3, ID_TEXTCTRL4, wxEmptyString, wxPoint(216,40), wxDefaultSize, wxTE_PASSWORD, wxDefaultValidator, _T("ID_TEXTCTRL4"));
    ButtonQryBank = new wxButton(Panel3, ID_BUTTON6, _("�������ʻ�"), wxPoint(320,40), wxSize(83,24), 0, wxDefaultValidator, _T("ID_BUTTON6"));
    ButtonFuture2Bank = new wxButton(Panel3, ID_BUTTON7, _("��ת��"), wxPoint(496,8), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON7"));
    ButtonBank2Future = new wxButton(Panel3, ID_BUTTON9, _("��ת��"), wxPoint(496,40), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON9"));
    ButtonQryBanks = new wxButton(Panel3, ID_BUTTON10, _("������"), wxPoint(408,8), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON10"));
    SpinCtrlMoney = new wxSpinCtrl(Panel3, ID_SPINCTRL5, _T("1"), wxPoint(408,40), wxSize(80,22), 0, 1, 100000000, 1, _T("ID_SPINCTRL5"));
    SpinCtrlMoney->SetValue(_T("1"));
    Panel4 = new wxPanel(this, ID_PANEL4, wxPoint(24,136), wxSize(584,32), wxTAB_TRAVERSAL, _T("ID_PANEL4"));
    ButtonOrderAction = new wxButton(Panel4, ID_BUTTON8, _("����"), wxPoint(496,8), wxDefaultSize, 0, wxDefaultValidator, _T("ID_BUTTON8"));
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

//(*����
Trade* trade = new Trade();
Quote* quote = new Quote();

char* user = new char[256];
char* pwd = new char[256];
char* tradingDay = new char[9];
char* orderInstrument = new char[256];
int orderRef = 0;
boost::posix_time::ptime ptime = boost::posix_time::microsec_clock::local_time();
list<string> msgs;			//��Ϣ��

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
    if(status == 3)	//������
        msgs.push_back(str(boost::format("%1%%2%")%status %msg));
    else
	{
        boost::posix_time::ptime timeNow = boost::posix_time::microsec_clock::local_time();  //universal_time();
        msgs.push_back(str(boost::format("%1%%2%\t%3%")%status %to_iso_extended_string(timeNow) %msg));
    }
}

//����-�޼�
void ReqOrderInsert(const char* instrument, double price, int director, int offset, int volume)
{
    CThostFtdcInputOrderField f;
    memset(&f, 0, sizeof(f));
    f.CombHedgeFlag[0] = THOST_FTDC_HF_Speculation;	//1Ͷ��
    f.ContingentCondition = THOST_FTDC_CC_Immediately;//��������
    f.ForceCloseReason = THOST_FTDC_FCC_NotForceClose;
    f.IsAutoSuspend = 0;
    f.OrderPriceType = THOST_FTDC_OPT_LimitPrice;		//***�����1  �޼�2***
    f.TimeCondition =  THOST_FTDC_TC_GFD;		//***�������1  ������Ч3***
    f.VolumeCondition = THOST_FTDC_VC_AV;	//��������1  ��С����2  ȫ���ɽ�3
    f.MinVolume = 1;

    strcpy(f.InvestorID, trade->investor);
    strcpy(f.UserID, trade->investor);
    strcpy(f.BrokerID, trade->broker);

    strcpy(f.InstrumentID, instrument);	//��Լ

    f.LimitPrice = price;				//***�۸�***

    if(director == 0)
        f.Direction = THOST_FTDC_D_Buy;			//��
    else
        f.Direction = THOST_FTDC_D_Sell;			//��

    if(offset == 0)
        f.CombOffsetFlag[0] = THOST_FTDC_OF_Open;//����
    else if(offset == 1)
        f.CombOffsetFlag[0] = THOST_FTDC_OF_Close;	//ƽ��
    else
        f.CombOffsetFlag[0] = THOST_FTDC_OF_CloseToday;	//ƽ��

    f.VolumeTotalOriginal = volume;//����

    sprintf(f.OrderRef, "%d", ++orderRef);//OrderRef

    show(str(boost::format("����(���%1%).....") %f.OrderRef), 1);

    ptime = boost::posix_time::microsec_clock::local_time();	//��ʱ
    trade->pUserApi->ReqOrderInsert(&f, trade->iReqID++);	//����
}
//����-�м�
void ReqOrderInsert(const char* instrument, int director, int offset, int volume)
{
    CThostFtdcInputOrderField f;
    memset(&f, 0, sizeof(f));
    f.CombHedgeFlag[0] = THOST_FTDC_HF_Speculation;	//1Ͷ��
    f.ContingentCondition = THOST_FTDC_CC_Immediately;//��������
    f.ForceCloseReason = THOST_FTDC_FCC_NotForceClose;
    f.IsAutoSuspend = 0;
    f.OrderPriceType = THOST_FTDC_OPT_AnyPrice;		//***�����1  �޼�2***
    f.TimeCondition =  THOST_FTDC_TC_IOC;		//***�������1  ������Ч3***
    f.VolumeCondition = THOST_FTDC_VC_AV;	//��������1  ��С����2  ȫ���ɽ�3
    f.MinVolume = 1;

    strcpy(f.InvestorID, trade->investor);
    strcpy(f.UserID, trade->investor);
    strcpy(f.BrokerID, trade->broker);

    strcpy(f.InstrumentID, instrument);	//��Լ

    f.LimitPrice = 0;					//***�۸�***

    if(director == 0)
        f.Direction = THOST_FTDC_D_Buy;			//��
    else
        f.Direction = THOST_FTDC_D_Sell;			//��

    if(offset == 0)
        f.CombOffsetFlag[0] = THOST_FTDC_OF_Open;//����
    else if(offset == 1)
        f.CombOffsetFlag[0] = THOST_FTDC_OF_Close;	//ƽ��
    else
        f.CombOffsetFlag[0] = THOST_FTDC_OF_CloseToday;	//ƽ��

    f.VolumeTotalOriginal = volume;//����

    sprintf(f.OrderRef, "%d", ++orderRef);//OrderRef

    show(str(boost::format("����(���%1%).....") %f.OrderRef), 1);

    ptime = boost::posix_time::microsec_clock::local_time();	//��ʱ
    trade->pUserApi->ReqOrderInsert(&f, trade->iReqID++);	//����
}
//��������
void pushOrders(int ticks, int seconds, const char* instrument, double price, int director, int offset, int volume)
{
    int slp = 1000 / ticks;
    for(int i = 0; i < ticks * seconds; ++i)
    {
        ReqOrderInsert(instrument, price, director, offset, volume);
        boost::this_thread::sleep(boost::posix_time::millisec(slp));
    }
}

//����
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

    ptime = boost::posix_time::microsec_clock::local_time();	//��ʱ
    trade->pUserApi->ReqOrderAction(&f, ++trade->iReqID);
}

//��ֲ�
void ReqQryInvestorPosition()
{
    boost::this_thread::sleep(boost::posix_time::millisec(1000));

    CThostFtdcQryInvestorPositionField f;
    memset(&f, 0, sizeof(f));
    strcpy(f.BrokerID, trade->broker);
    strcpy(f.InvestorID, trade->investor);
    trade->pUserApi->ReqQryInvestorPosition(&f, ++trade->iReqID);
}

//��ֲ���ϸ
void ReqQryInvestorPositionDetail()
{
    boost::this_thread::sleep(boost::posix_time::millisec(1000));

    CThostFtdcQryInvestorPositionDetailField f;
    memset(&f, 0, sizeof(f));
    strcpy(f.BrokerID, trade->broker);
    strcpy(f.InvestorID, trade->investor);
    trade->pUserApi->ReqQryInvestorPositionDetail(&f, ++trade->iReqID);
}

//���ʽ�
void ReqQryTradingAccount()
{
    boost::this_thread::sleep(boost::posix_time::millisec(1000));

    CThostFtdcQryTradingAccountField f;
    strcpy(f.BrokerID, trade->broker);
    strcpy(f.InvestorID, trade->investor);
    trade->pUserApi->ReqQryTradingAccount(&f, ++trade->iReqID);
}

//��ǩԼ����
void ReqQryAccountregister()
{
    boost::this_thread::sleep(boost::posix_time::millisec(1000));

    CThostFtdcQryAccountregisterField f;
    memset(&f, 0, sizeof(f));
    strcpy(f.BrokerID, trade->broker);
    strcpy(f.AccountID, trade->investor);

    trade->pUserApi->ReqQryAccountregister(&f, ++trade->iReqID);
}

//�������ʻ�
void ReqQueryBankAccountMoneyByFuture(const char* bankID, const char* bankPWD, const char* accountPWD)
{
    CThostFtdcReqQueryAccountField f;
    memset(&f, 0, sizeof(f));
    //strcpy(f.TradeCode, "204002");

    strcpy(f.BankID, bankID);
    strcpy(f.BankBranchID, "0000");		//������
    strcpy(f.BankPassWord, bankPWD);

    strcpy(f.BrokerID, trade->broker);
    strcpy(f.AccountID, trade->investor);
    strcpy(f.Password, accountPWD);
    f.SecuPwdFlag = THOST_FTDC_BPWDF_BlankCheck;	//���ĺ˶�
    strcpy(f.CurrencyID, "RMB"); 					//���֣�RMB-����� USD-��Բ HKD-��Ԫ

    trade->pUserApi->ReqQueryBankAccountMoneyByFuture(&f, ++trade->iReqID);
}

//��ת����
void ReqTransferByFuture(const char* bankID, const char* bankPWD, const char* accountPWD, double amount, bool f2B)
{
    CThostFtdcReqTransferField f;
    memset(&f, 0, sizeof(f));

    strcpy(f.BankID, bankID);
    strcpy(f.BankBranchID, "0000");		//������
    strcpy(f.BankPassWord, bankPWD);

    strcpy(f.BrokerID, trade->broker);
    strcpy(f.AccountID, trade->investor);
    strcpy(f.Password, accountPWD);
    f.SecuPwdFlag = THOST_FTDC_BPWDF_BlankCheck;	//���ĺ˶�
    strcpy(f.CurrencyID, "RMB"); 					//���֣�RMB-����� USD-��Բ HKD-��Ԫ

    f.TradeAmount = amount;
    if(f2B)	//��ת��
        trade->pUserApi->ReqFromFutureToBankByFuture(&f, ++trade->iReqID);
    else	//��ת��
        trade->pUserApi->ReqFromBankToFutureByFuture(&f, ++trade->iReqID);
}

//����
void Trade::OnFrontConnected()
{
    show("��¼��...");
    trade->ReqLogin(user, pwd);
}

//�Ͽ�
void Trade::OnFrontDisconnected(int nReason)
{
    show("���׶Ͽ�!"+nReason);
}

//����
void Trade::OnHeartBeatWarning(int nTimeLapse)
{
}

//��֤
void Trade::OnRspAuthenticate(CThostFtdcRspAuthenticateField* pRspAuthenticateField, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
}

//��¼
void Trade::OnRspUserLogin(CThostFtdcRspUserLoginField* pRspUserLogin,
                           CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if(IsErrorRspInfo(pRspInfo))
    {
        string msg = str(boost::format("��¼����(%1%):%2%") %pRspInfo->ErrorID % pRspInfo->ErrorMsg);
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

//�����ȷ����Ϣ
void Trade::OnRspQrySettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField* pSettlementInfoConfirm,
        CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if(this->IsErrorRspInfo(pRspInfo))
    {
        show("��ѯ����ȷ�ϴ���");
    }
    else
    {
        strcpy(tradingDay, pUserApi->GetTradingDay());
        if((pSettlementInfoConfirm) && strcmp(pSettlementInfoConfirm->ConfirmDate, tradingDay) == 0)
        {
            show("ȷ�Ͻ���...");
            CThostFtdcSettlementInfoConfirmField f;
            memset(&f, 0, sizeof(f));
            strcpy(f.BrokerID, broker);
            strcpy(f.InvestorID, user);
            pUserApi->ReqSettlementInfoConfirm(&f, ++iReqID);
        }
        else
        {
            boost::this_thread::sleep(boost::posix_time::millisec(1000));
            show("�������Ϣ...");
            CThostFtdcQrySettlementInfoField f;
            memset(&f, 0, sizeof(f));
            strcpy(f.BrokerID, broker);
            strcpy(f.InvestorID, user);
            pUserApi->ReqQrySettlementInfo(&f, ++iReqID);
        }
    }
}

//�������Ϣ
void Trade::OnRspQrySettlementInfo(CThostFtdcSettlementInfoField* pSettlementInfo,
                                   CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if(pSettlementInfo)
        this->settleInfo += pSettlementInfo->Content;
    if(bIsLast)
    {
        show(this->settleInfo, 1);		//�û�ȷ��

        show("ȷ�Ͻ���...");
        CThostFtdcSettlementInfoConfirmField f;
        memset(&f, 0, sizeof(f));
        strcpy(f.BrokerID, broker);
        strcpy(f.InvestorID, user);
        pUserApi->ReqSettlementInfoConfirm(&f, ++iReqID);
    }
}

//ȷ�Ͻ���
void Trade::OnRspSettlementInfoConfirm(CThostFtdcSettlementInfoConfirmField* pSettlementInfoConfirm,
                                       CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    boost::this_thread::sleep(boost::posix_time::millisec(1000));
    show("���Լ...");
    CThostFtdcQryInstrumentField f;
    memset(&f, 0, sizeof(f));
    pUserApi->ReqQryInstrument(&f, ++iReqID);
}

//���Լ
void Trade::OnRspQryInstrument(CThostFtdcInstrumentField* pInstrument,
                               CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if(!IsErrorRspInfo(pRspInfo))
    {
        char* tmp = new char[strlen(pInstrument->InstrumentID) + 1];
        strcpy(tmp, pInstrument->InstrumentID);
        dicInstrument[string(tmp)] = *pInstrument;	//��Լ���Ʊ�ʶ
    }
    if(bIsLast)
    {
        show("�����¼��...");
        if(this->addrID == -1)	//����
        {
            char* tmp = new char[256];
            strcpy(tmp, string(this->frontAddr).substr(0, strlen(this->frontAddr)-2).append("13").c_str());
            quote->ReqConnect(tmp, this->broker);
        }
        else
            quote->ReqConnect(addrID);
    }
}

//��ֲ���Ӧ
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
                         %"��Լ" %"����" %"����" %"�ֲ�" %"�ɱ�" %"�ֲ�ӯ��");
        BOOST_FOREACH(mapPosition::value_type i, dicPosition)
        {
            CThostFtdcInvestorPositionField f = i.second;
            msg += str(boost::format("%|1$+11|%|2$+11|%|3$+11|%|4$+11|%|5$+11|%|6$+11|\n")
                       %f.InstrumentID %(f.PosiDirection == THOST_FTDC_PD_Long?"��":"��")
                       %(f.PositionDate == THOST_FTDC_PSD_History?"���":"���") %f.Position
                       %(f.PositionCost / dicInstrument[string(pInvestorPosition->InstrumentID)].VolumeMultiple)
                       %f.PositionProfit);
        }
        show(msg, 1);
    }
}

//��ֲ���ϸ
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
                         %"�ɽ����" %"��Լ" %"����" %"����" %"����" %"���ּ�" %"�ֲ�ӯ��");
        BOOST_FOREACH(mapPositionDetail::value_type i, dicPositionDetail)
        {
            CThostFtdcInvestorPositionDetailField f = i.second;
            msg += str(boost::format("%|1$+21|%|2$+11|%|3$+11|%|4$+11|%|5$+11|%|6$+11|%|7$+11|\n")
                       %f.TradeID %f.InstrumentID %(f.Direction == THOST_FTDC_D_Buy?"��":"��")
                       %(f.OpenDate == tradingDay?"���":"���") %f.Volume
                       %f.OpenPrice %f.PositionProfitByDate);

            //�ֲֻ���
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
                //�ֲ�ӯ����Ҫ�Լ�����detailʼ��Ϊ0
                pf.PositionProfit += (f.Direction == THOST_FTDC_PD_Long? 1 : -1) *
                                     (dicTick[f.InstrumentID].LastPrice - f.LastSettlementPrice) * f.Volume * multi;
            }
            else
            {
                pf.TodayPosition += f.Volume;
                pf.PositionCost += f.Volume * f.OpenPrice * multi;
                //�ֲ�ӯ����Ҫ�Լ�����detailʼ��Ϊ0
                pf.PositionProfit += (f.Direction == THOST_FTDC_PD_Long? 1 : -1) *
                                     (dicTick[f.InstrumentID].LastPrice - f.OpenPrice) * f.Volume * multi;
            }

            dicPosition[positionID] = pf;
        }
        show(msg, 1);

        //��ʾ�ֲֻ���
        msg = str(boost::format("\n%|1$+12|%|2$+12|%|3$+12|%|4$+12|%|5$+12|%|6$+12|\n")
                  %"��Լ" %"����" %"����" %"�ֲ�" %"�ɱ�" %"�ֲ�ӯ��");
        BOOST_FOREACH(mapPosition::value_type i, dicPosition)
        {
            CThostFtdcInvestorPositionField& f = i.second;
            msg += str(boost::format("%|1$+11|%|2$+11|%|3$+11|%|4$+11|%|5$+11|%|6$+11|\n")
                       %f.InstrumentID %(f.PosiDirection == THOST_FTDC_PD_Long?"��":"��")
                       %(f.PositionDate == THOST_FTDC_PSD_History?"���":"���") %f.Position
                       %(f.PositionCost / f.Position / dicInstrument[string(f.InstrumentID)].VolumeMultiple) %f.PositionProfit);
        }
        show(msg, 1);
    }
}

//���ʽ�
void Trade::OnRspQryTradingAccount(CThostFtdcTradingAccountField* pTradingAccount,
                                   CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if(bIsLast)
    {
        //��̬Ȩ��=���ս���-������+�����
        double preBalance = pTradingAccount->PreBalance - pTradingAccount->Withdraw + pTradingAccount->Deposit;
        //��̬Ȩ��=��̬Ȩ��+ ƽ��ӯ��+ �ֲ�ӯ��- ������
        double current = preBalance
                         + pTradingAccount->CloseProfit + pTradingAccount->PositionProfit - pTradingAccount->Commission;
        string msg = str(boost::format("\n%|1$15|%|2$15|%|3$15|%|4$15|%|5$15|%|6$15|%|7$15|%|8$15|\n")
                         %"�����ʽ�" %"ƽ��ӯ��" %"�ֲ�ӯ��" %"��̬Ȩ��" %"��̬Ȩ��" %"ռ�ñ�֤��" %"�����ʽ�" %"���ն�");
        msg += str(boost::format("%|1$14.2f|%|2$14.2f|%|3$14.2f|%|4$14.2f|%|5$14.2f|%|6$14.2f|%|7$14.2f|%|8$14.2f|%%")
                   %pTradingAccount->Available %pTradingAccount->CloseProfit %pTradingAccount->PositionProfit
                   %preBalance %current %pTradingAccount->CurrMargin
                   %(pTradingAccount->FrozenMargin + pTradingAccount->FrozenCommission)
                   %(current == 0? 0 : (pTradingAccount->CurrMargin / current * 100)));
        show(msg, 1);
    }
}

//������Ӧ
void Trade::OnRtnOrder(CThostFtdcOrderField* pOrder)
{
	if(boost::lexical_cast<int>(pOrder->OrderRef) > orderRef) 	//����Ӧ
		show(str(boost::format("������Ӧ(%1%),Broker���(%2%),״̬:%3%") % pOrder->OrderRef %pOrder->BrokerOrderSeq %pOrder->StatusMsg), 1);
    else
	{
		boost::posix_time::time_duration diff = boost::posix_time::microsec_clock::local_time()-ptime;
		show(str(boost::format("������Ӧ(%1%),Broker���(%2%),��Ӧʱ��%4%����,״̬:%3%")
				%pOrder->OrderRef %pOrder->BrokerOrderSeq %pOrder->StatusMsg %(diff.total_nanoseconds()/1000000.0)), 1);
	}

    string id = str(boost::format("%1%|%2%|%3%|%4%") %pOrder->InstrumentID %pOrder->SessionID %pOrder->FrontID %pOrder->OrderRef);
    dicOrder[id] = *pOrder;
}

//�ɽ���Ӧ
void Trade::OnRtnTrade(CThostFtdcTradeField* pTrade)
{
    show(str(boost::format("�ɽ����:%1%, ƽ̨���%2%, �ɽ�ʱ��%3%")%pTrade->TradeID %pTrade->BrokerOrderSeq %pTrade->TradeTime), 2);
}

//��������
void Trade::OnRspOrderInsert(CThostFtdcInputOrderField* pInputOrder, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    show(pRspInfo->ErrorMsg, 2);
}

//��������
void Trade::OnErrRtnOrderInsert(CThostFtdcInputOrderField* pInputOrder, CThostFtdcRspInfoField* pRspInfo)
{
    show(pRspInfo->ErrorMsg, 2);
}

//��������
void Trade::OnRspOrderAction(CThostFtdcInputOrderActionField* pInputOrderAction, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    show(pRspInfo->ErrorMsg, 2);
}

//ǩԼ����
void Trade::OnRspQryAccountregister(CThostFtdcAccountregisterField* pAccountregister,
                                    CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if(IsErrorRspInfo(pRspInfo))
        show(str(boost::format("��ǩԼ���д���:%1%") %pRspInfo->ErrorMsg));
    else if(pAccountregister)
    {
        string bank = "";
        if(pAccountregister->BankID[0] == THOST_FTDC_BF_ABC)
            bank = "ũҵ����";
        else if(pAccountregister->BankID[0] == THOST_FTDC_BF_BC)
            bank = "�й�����";
        else if(pAccountregister->BankID[0] == THOST_FTDC_BF_BOC)
            bank = "��ͨ����";
        else if(pAccountregister->BankID[0] == THOST_FTDC_BF_CBC)
            bank = "��������";
        else if(pAccountregister->BankID[0] == THOST_FTDC_BF_ICBC)
            bank = "��������";
        else if(pAccountregister->BankID[0] == THOST_FTDC_BF_Other)
            bank = "��������";

        string bankID = string(pAccountregister->BankAccount);
        bankID = bankID.substr(strlen(pAccountregister->BankAccount)-4, 4);
        show(str(boost::format("%1%.%2%(****%3%)") %pAccountregister->BankID[0] % bank
                 %bankID), 3);
    }
    else
		show("��ǩԼ����!", 1);
}

//�������ʻ���Ӧ
void Trade::OnRtnQueryBankBalanceByFuture(CThostFtdcNotifyQueryAccountField* pNotifyQueryAccount)
{
    show(str(boost::format("�������:%1%, ��ȡ���:%2%")%pNotifyQueryAccount->BankUseAmount
             %pNotifyQueryAccount->BankFetchAmount), 1);
}

//�������ʻ�����
void Trade::OnRspQueryBankAccountMoneyByFuture(CThostFtdcReqQueryAccountField* pReqQueryAccount, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if(IsErrorRspInfo(pRspInfo))
        show(str(boost::format("��ѯ�����ʺŴ���:%1%") %pRspInfo->ErrorMsg), 1);
    else
        show(pReqQueryAccount->Digest, 1);
}

//�������ʻ�����
void Trade::OnErrRtnQueryBankBalanceByFuture(CThostFtdcReqQueryAccountField* pReqQueryAccount, CThostFtdcRspInfoField* pRspInfo)
{
    show(str(boost::format("������������:%1%")%pRspInfo->ErrorMsg), 1);
}

//��->��
void Trade::OnRtnFromFutureToBankByFuture(CThostFtdcRspTransferField* pRspTransfer)
{
    if(pRspTransfer->ErrorID == 0)
        show("�ڻ�ת���гɹ�!", 1);
    else
        show(str(boost::format("�ڻ�ת����ʧ��:%1%") %pRspTransfer->ErrorMsg), 1);
}

//��->������
void Trade::OnErrRtnFutureToBankByFuture(CThostFtdcReqTransferField* pReqTransfer, CThostFtdcRspInfoField* pRspInfo)
{
    show(str(boost::format("�ڻ�ת����ʧ��:%1%") %pRspInfo->ErrorMsg), 1);
}

//��->������
void Trade::OnRspFromFutureToBankByFuture(CThostFtdcReqTransferField* pReqTransfer, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    show(str(boost::format("�ڻ�ת����ʧ��:%1%") %pRspInfo->ErrorMsg), 1);
}

//��->��
void Trade::OnRtnFromBankToFutureByFuture(CThostFtdcRspTransferField* pRspTransfer)
{
    if(pRspTransfer->ErrorID == 0)
        show("����ת�ڻ��ɹ�!", 1);
    else
        show(str(boost::format("����ת�ڻ�ʧ��:%1%") %pRspTransfer->ErrorMsg), 1);
}

//��->�ڴ���
void Trade::OnErrRtnBankToFutureByFuture(CThostFtdcReqTransferField* pReqTransfer, CThostFtdcRspInfoField* pRspInfo)
{
    show(str(boost::format("����ת�ڻ�ʧ��:%1%") %pRspInfo->ErrorMsg), 1);
}

//��->�ڴ���
void Trade::OnRspFromBankToFutureByFuture(CThostFtdcReqTransferField* pReqTransfer, CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    show(str(boost::format("����ת�ڻ�ʧ��:%1%") %pRspInfo->ErrorMsg), 1);
}

//(*������Ӧ�¼�
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

//(*������Ӧ

void Quote::OnRspError(CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
}

void Quote::OnFrontConnected()
{
    this->ReqLogin(user, pwd);
}

void Quote::OnFrontDisconnected(int nReason)
{
    show("����Ͽ���");
}

void Quote::OnHeartBeatWarning(int nTimeLapse)
{
}

void Quote::OnRspUserLogin(CThostFtdcRspUserLoginField* pRspUserLogin,
                           CThostFtdcRspInfoField* pRspInfo, int nRequestID, bool bIsLast)
{
    if(IsErrorRspInfo(pRspInfo))
        show(str(boost::format("��¼����:%1%") %pRspInfo->ErrorMsg));
    else
    {
    	show("�����¼�ɹ�!"); 	//
//        show("�����¼�ɹ�, �������飡");
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

//���������Ӧ
void Quote::OnRtnDepthMarketData(CThostFtdcDepthMarketDataField* pDepthMarketData)
{
    CThostFtdcDepthMarketDataField field;
    memset(&field, 0, sizeof(field));
    field = *pDepthMarketData;

    boost::thread tExecTick(&tickToFile, field);	//���߳�
}

//tickд���ı�
void tickToFile(CThostFtdcDepthMarketDataField f)
{
    //�Ϸ���Լ//�Ϸ�����
    if(dicInstrument.find(f.InstrumentID) != dicInstrument.end() && f.LastPrice < f.UpperLimitPrice)
    {
        CThostFtdcInstrumentField instField;
        memset(&instField, 0, sizeof(instField));
        instField = dicInstrument[string(f.InstrumentID)];	//��Լ��Ϣ

        strcpy(f.TradingDay, tradingDay);			//����
        strcpy(f.ExchangeID, instField.ExchangeID);	//������

        if(f.AskPrice1 > f.UpperLimitPrice)	//�����йұߵ����
            f.AskPrice1 = f.LastPrice;
        if(f.BidPrice1 > f.UpperLimitPrice)
            f.BidPrice1 = f.LastPrice;

        if(instField.ExchangeID == "CZCE") //�ɽ��������
            f.Turnover *= instField.VolumeMultiple;
        else
            f.AveragePrice /= instField.VolumeMultiple;

        dicTick[string(f.InstrumentID)] = f;	//����Tick

		return;
		//============ �ı���¼ ===========//
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


//��¼
void FrameMain::OnButtonLoginClick(wxCommandEvent& event)
{
    this->ButtonLogin->Enable(false);
    strcpy(user, this->TextCtrlInvestor->GetValue().mb_str());
    strcpy(pwd,this->TextCtrlPassWord->GetValue().mb_str());

    show("���׽ӿ�������...");
    if(this->ChoiceFront->GetLabelText().mb_str() == "����")
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

//��ֲ�
void FrameMain::OnButtonQryPositionClick(wxCommandEvent& event)
{
    ReqQryInvestorPosition();
}

//���ʽ�
void FrameMain::OnButtonReqQryAccountClick(wxCommandEvent& event)
{
    ReqQryTradingAccount();
}

//��ǩԼ����
void FrameMain::OnButtonQryBanksClick(wxCommandEvent& event)
{
    ReqQryAccountregister();
}

//�������ʻ�
void FrameMain::OnButtonQryBankClick(wxCommandEvent& event)
{
    ReqQueryBankAccountMoneyByFuture(string(this->ChoiceBanks->GetLabel().mb_str()).substr(0,1).c_str(),
                                     this->TextCtrlBankPwd->GetLabel().mb_str(), this->TextCtrlAccountPwd->GetLabel().mb_str());
}

//��->��
void FrameMain::OnButtonFuture2BankClick(wxCommandEvent& event)
{
    ReqTransferByFuture(string(this->ChoiceBanks->GetLabel().mb_str()).substr(0,1).c_str(),
                        this->TextCtrlBankPwd->GetLabel().mb_str(),	this->TextCtrlAccountPwd->GetLabel().mb_str(),
                        this->SpinCtrlMoney->GetValue(), true);
}

//��->��
void FrameMain::OnButtonBank2FutureClick(wxCommandEvent& event)
{
    ReqTransferByFuture(string(this->ChoiceBanks->GetLabel().mb_str()).substr(0,1).c_str(),
                        this->TextCtrlBankPwd->GetLabel().mb_str(),	this->TextCtrlAccountPwd->GetLabel().mb_str(),
                        this->SpinCtrlMoney->GetValue(), false);
}

//�µ�
void FrameMain::OnButtonOrderInsertClick(wxCommandEvent& event)
{
    int offset = this->ChoiceOffset->GetCurrentSelection();
    if(offset == 2)	//ƽ��3
        offset = 3;
    ReqOrderInsert(this->ComboBoxInstrument->GetValue().mb_str(), this->SpinCtrlPrice->GetValue(),
                   this->ChoiceDirector->GetCurrentSelection(), offset, this->SpinCtrlVolume->GetValue());
}

//��������
void FrameMain::OnButtonOrderContinueClick(wxCommandEvent& event)
{
    int offset = this->ChoiceOffset->GetCurrentSelection();
    if(offset == 2)	//ƽ��3
        offset = 3;
    boost::thread trd(&pushOrders, this->SpinCtrlTicks->GetValue(), this->SpinCtrlSeconds->GetValue(),
                      this->ComboBoxInstrument->GetValue().mb_str(), this->SpinCtrlPrice->GetValue(),
                      this->ChoiceDirector->GetCurrentSelection(), offset, this->SpinCtrlVolume->GetValue());
}

//����
void FrameMain::OnButtonOrderActionClick(wxCommandEvent& event)
{
    vector<string> v(3);
    string tmp = string(this->ChoiceBrokerSeq->GetLabel().mb_str());
    boost::algorithm::split(v, tmp, is_any_of("|"));
    ReqOrderAction(v[0].c_str(), atoi(v[1].c_str()), atoi(v[2].c_str()), v.back().c_str());
}

//ѡ���Լ���޸���������µ�
void FrameMain::OnComboBoxInstrumentSelected(wxCommandEvent& event)
{
    CThostFtdcInstrumentField f = dicInstrument[string(this->ComboBoxInstrument->GetValue().mb_str(wxConvLibc))];
    this->SpinCtrlVolume->SetMax(f.MaxLimitOrderVolume);
}

//��ʾ��Ϣ
void FrameMain::showMsg(wxString msg, int status = 0)
{
    if(status == 0)
    {
        this->StatusBar1->SetStatusText(msg, 0);
        if(msg.Index(_("��¼����")) != wxNOT_FOUND || msg.Index(_("��¼�ɹ�")) != wxNOT_FOUND)
        {
            this->ButtonLogin->Enable(true);
            this->Panel2->Enable(true);
            this->Panel3->Enable(true);
        }
    }
    else
    {
        if(status == 3)	//������
        {
            if(this->ChoiceBanks->FindString(msg) == wxNOT_FOUND)
            {
                this->ChoiceBanks->Append(msg);
                this->ChoiceBanks->SetSelection(this->ChoiceBanks->GetCount() - 1);
            }
        }
        msg.append(_T("\r\n"));

        this->RichTextCtrlMsg->AppendText(msg);
        this->RichTextCtrlMsg->ScrollLines(this->RichTextCtrlMsg->GetNumberOfLines());		//����������
    }
}

//��ʱˢ�½���
void FrameMain::OnTimer1Trigger(wxTimerEvent& event)
{
    //(*��Լ�б�
    if(this->ComboBoxInstrument->GetCount() < dicInstrument.size())
    {
        this->ComboBoxInstrument->Clear();
        BOOST_FOREACH(mapInstrument::value_type i, dicInstrument)
        {
            this->ComboBoxInstrument->Append(wxString(i.first.c_str(), wxConvLibc));
        }
    }
    //*)
    //��Ϣ���
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

    //����
    BOOST_FOREACH(mapOrder::value_type i, dicOrder)
    {
        wxString tmp = wxString(i.first.c_str(), wxConvLibc);
        if(this->ChoiceBrokerSeq->FindString(tmp) == wxNOT_FOUND)
            this->ChoiceBrokerSeq->Append(tmp);
    }

    //���¼۸�
    if(this->CheckBoxPriceType->GetValue() && !this->ComboBoxInstrument->GetValue().IsEmpty() && !this->ComboBoxInstrument->GetValue().IsNull())
    {
        string instrument = string(this->ComboBoxInstrument->GetValue().mb_str());

        if(dicTick.find(instrument) == dicTick.end()) //δ��������
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
	if(tmp == "����")
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
