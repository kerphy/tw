#ifndef FRAMEMAIN_H
#define FRAMEMAIN_H

//(*Headers(FrameMain)
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/checkbox.h>
#include <wx/spinctrl.h>
#include <wx/panel.h>
#include <wx/choice.h>
#include <wx/richtext/richtextctrl.h>
#include <wx/button.h>
#include <wx/frame.h>
#include <wx/timer.h>
#include <wx/combobox.h>
#include <wx/statusbr.h>
//*)
#include <boost/date_time.hpp>
#include "trade.h"

class FrameMain: public wxFrame
{
	public:

		FrameMain(wxWindow* parent,wxWindowID id=wxID_ANY);
		virtual ~FrameMain();

		//(*Declarations(FrameMain)
		wxButton* ButtonOrderInsert;
		wxTextCtrl* TextCtrlInvestor;
		wxButton* ButtonLogin;
		wxTextCtrl* TextCtrlBankPwd;
		wxSpinCtrl* SpinCtrlSeconds;
		wxRichTextCtrl* RichTextCtrlMsg;
		wxStaticText* StaticText2;
		wxPanel* Panel4;
		wxSpinCtrl* SpinCtrlPrice;
		wxTextCtrl* TextCtrlAccountPwd;
		wxButton* ButtonOrderAction;
		wxSpinCtrl* SpinCtrlMoney;
		wxButton* ButtonFuture2Bank;
		wxStaticText* StaticText6;
		wxButton* ButtonBank2Future;
		wxButton* ButtonOrderContinue;
		wxButton* ButtonReqQryAccount;
		wxChoice* ChoiceDirector;
		wxPanel* Panel1;
		wxStaticText* StaticText1;
		wxStaticText* StaticText3;
		wxSpinCtrl* SpinCtrlTicks;
		wxCheckBox* CheckBoxPriceType;
		wxTextCtrl* TextCtrlPassWord;
		wxPanel* Panel3;
		wxTextCtrl* TextCtrlOther;
		wxChoice* ChoiceBrokerSeq;
		wxButton* ButtonQryDetail;
		wxStaticText* StaticText5;
		wxButton* ButtonQryBank;
		wxTextCtrl* TextCtrlBroker;
		wxButton* ButtonQryPosition;
		wxChoice* ChoiceFront;
		wxStatusBar* StatusBar1;
		wxSpinCtrl* SpinCtrlVolume;
		wxPanel* Panel2;
		wxButton* ButtonQryBanks;
		wxStaticText* StaticText4;
		wxChoice* ChoiceOffset;
		wxTimer Timer1;
		wxChoice* ChoiceBanks;
		wxComboBox* ComboBoxInstrument;
		//*)

	protected:

		//(*Identifiers(FrameMain)
		static const long ID_RICHTEXTCTRL1;
		static const long ID_CHOICE1;
		static const long ID_TEXTCTRL1;
		static const long ID_TEXTCTRL2;
		static const long ID_BUTTON1;
		static const long ID_TEXTCTRL5;
		static const long ID_TEXTCTRL6;
		static const long ID_PANEL1;
		static const long ID_COMBOBOX1;
		static const long ID_SPINCTRL1;
		static const long ID_CHECKBOX1;
		static const long ID_CHOICE2;
		static const long ID_CHOICE3;
		static const long ID_SPINCTRL2;
		static const long ID_BUTTON2;
		static const long ID_STATICTEXT1;
		static const long ID_SPINCTRL3;
		static const long ID_STATICTEXT2;
		static const long ID_SPINCTRL4;
		static const long ID_STATICTEXT3;
		static const long ID_BUTTON3;
		static const long ID_BUTTON4;
		static const long ID_BUTTON5;
		static const long ID_BUTTON11;
		static const long ID_PANEL2;
		static const long ID_STATICTEXT4;
		static const long ID_CHOICE4;
		static const long ID_STATICTEXT5;
		static const long ID_TEXTCTRL3;
		static const long ID_STATICTEXT6;
		static const long ID_TEXTCTRL4;
		static const long ID_BUTTON6;
		static const long ID_BUTTON7;
		static const long ID_BUTTON9;
		static const long ID_BUTTON10;
		static const long ID_SPINCTRL5;
		static const long ID_PANEL3;
		static const long ID_BUTTON8;
		static const long ID_CHOICE5;
		static const long ID_PANEL4;
		static const long ID_TIMER1;
		static const long ID_STATUSBAR1;
		//*)

	private:

		//(*Handlers(FrameMain)
		void OnButtonLoginClick(wxCommandEvent& event);
		void OnButtonOrderInsertClick(wxCommandEvent& event);
		void OnTimer1Trigger(wxTimerEvent& event);
		void OnCheckBoxPriceTypeClick(wxCommandEvent& event);
		void OnComboBoxInstrumentSelected(wxCommandEvent& event);
		void OnButtonOrderContinueClick(wxCommandEvent& event);
		void OnButtonQryPositionClick(wxCommandEvent& event);
		void OnButtonReqQryAccountClick(wxCommandEvent& event);
		void OnButtonQryBanksClick(wxCommandEvent& event);
		void OnButtonQryFutureClick(wxCommandEvent& event);
		void OnButtonQryBankClick(wxCommandEvent& event);
		void OnButtonFuture2BankClick(wxCommandEvent& event);
		void OnButtonBank2FutureClick(wxCommandEvent& event);
		void OnClose(wxCloseEvent& event);
		void OnButtonOrderActionClick(wxCommandEvent& event);
		void OnButtonQryDetailClick(wxCommandEvent& event);
		void OnChoiceFrontSelect(wxCommandEvent& event);
		//*)

		void showMsg(wxString msg, int status);

		wxString settleInfo;

		DECLARE_EVENT_TABLE();
};

#endif
