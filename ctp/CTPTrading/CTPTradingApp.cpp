/***************************************************************
 * Name:      CTPTradingApp.cpp
 * Purpose:   Code for Application Class
 * Author:    ���� (hubert28@qq.com)
 * Created:   2012-07-03
 * Copyright: ���� ()
 * License:
 **************************************************************/

#include "CTPTradingApp.h"

//(*AppHeaders
#include "FrameMain.h"
#include <wx/image.h>
//*)

IMPLEMENT_APP(CTPTradingApp);

bool CTPTradingApp::OnInit()
{
    //(*AppInitialize
    bool wxsOK = true;
    wxInitAllImageHandlers();
    if ( wxsOK )
    {
    FrameMain* Frame = new FrameMain(0);
    Frame->Show();
    SetTopWindow(Frame);
    }
    //*)
    return wxsOK;

}
