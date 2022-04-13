#include "Main.h"

#pragma region Event Table
wxBEGIN_EVENT_TABLE(Main, wxFrame)
	EVT_BUTTON(99, OnButtonClick)// backspace
	EVT_BUTTON(100, OnButtonClick)// =
	EVT_BUTTON(101, OnButtonClick)// +
	EVT_BUTTON(102, OnButtonClick)// -
	EVT_BUTTON(103, OnButtonClick)// *
	EVT_BUTTON(104, OnButtonClick)// /
	EVT_BUTTON(105, OnButtonClick)// binary
	EVT_BUTTON(106, OnButtonClick)// hex
	EVT_BUTTON(107, OnButtonClick)// %
	EVT_BUTTON(108, OnButtonClick)// negative
	EVT_BUTTON(109, OnButtonClick)// decimal
	EVT_BUTTON(0, OnButtonClick)
	EVT_BUTTON(1, OnButtonClick)
	EVT_BUTTON(2, OnButtonClick)
	EVT_BUTTON(3, OnButtonClick)
	EVT_BUTTON(4, OnButtonClick)
	EVT_BUTTON(5, OnButtonClick)
	EVT_BUTTON(6, OnButtonClick)
	EVT_BUTTON(7, OnButtonClick)
	EVT_BUTTON(8, OnButtonClick)
	EVT_BUTTON(9, OnButtonClick)
wxEND_EVENT_TABLE();
#pragma endregion

Main::Main() : wxFrame(nullptr, wxID_ANY, "Doom Calculator", wxPoint(200, 200), wxSize(500, 470)) 
{
	SetBackgroundColour(wxColor(26, 21, 21));
	wxFont font(25, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);
	wxFont btnFont(15, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);

#pragma region Toolbox
	text = new wxTextCtrl(this, wxID_ANY, "", wxPoint(10, 10), wxSize(320, 60), wxTE_RIGHT);
	backBtn = new wxButton(this, 99, "Clear", wxPoint(377, 10), wxSize(100, 60));
	equalsBtn = new wxButton(this, 100, "=", wxPoint(377, 360), wxSize(100, 60));
	addBtn = new wxButton(this, 101, "+", wxPoint(377, 290), wxSize(100, 60));
	subtractBtn = new wxButton(this, 102, "-", wxPoint(377, 220), wxSize(100, 60));
	multiplyBtn = new wxButton(this, 103, "*", wxPoint(377, 150), wxSize(100, 60));
	divideBtn = new wxButton(this, 104, "/", wxPoint(377, 80), wxSize(100, 60));
	binBtn = new wxButton(this, 105, "Binary", wxPoint(120, 80), wxSize(100, 60));
	hexBtn = new wxButton(this, 106, "Hex", wxPoint(10, 80), wxSize(100, 60));
	modBtn = new wxButton(this, 107, "%", wxPoint(230, 80), wxSize(100, 60));
	negBtn = new wxButton(this, 108, "(-)", wxPoint(10, 360), wxSize(100, 60));
	decBtn = new wxButton(this, 109, ".", wxPoint(230, 360), wxSize(100, 60));
	btn0 = new wxButton(this, 0, "0", wxPoint(120, 360), wxSize(100, 60));
	btn1 = new wxButton(this, 1, "1", wxPoint(10, 290), wxSize(100, 60));
	btn2 = new wxButton(this, 2, "2", wxPoint(120, 290), wxSize(100, 60));
	btn3 = new wxButton(this, 3, "3", wxPoint(230, 290), wxSize(100, 60));
	btn4 = new wxButton(this, 4, "4", wxPoint(10, 220), wxSize(100, 60));
	btn5 = new wxButton(this, 5, "5", wxPoint(120, 220), wxSize(100, 60));
	btn6 = new wxButton(this, 6, "6", wxPoint(230, 220), wxSize(100, 60));
	btn7 = new wxButton(this, 7, "7", wxPoint(10, 150), wxSize(100, 60));
	btn8 = new wxButton(this, 8, "8", wxPoint(120, 150), wxSize(100, 60));
	btn9 = new wxButton(this, 9, "9", wxPoint(230, 150), wxSize(100, 60));
#pragma endregion

#pragma region Font
	text->SetFont(font);
	backBtn->SetFont(btnFont);
	equalsBtn->SetFont(btnFont);
	addBtn->SetFont(btnFont);
	subtractBtn->SetFont(btnFont);
	multiplyBtn->SetFont(btnFont);
	divideBtn->SetFont(btnFont);
	binBtn->SetFont(btnFont);
	hexBtn->SetFont(btnFont);
	modBtn->SetFont(btnFont);
	negBtn->SetFont(btnFont);
	decBtn->SetFont(btnFont);
	btn0->SetFont(btnFont);
	btn1->SetFont(btnFont);
	btn2->SetFont(btnFont);
	btn3->SetFont(btnFont);
	btn4->SetFont(btnFont);
	btn5->SetFont(btnFont);
	btn6->SetFont(btnFont);
	btn7->SetFont(btnFont);
	btn8->SetFont(btnFont);
	btn9->SetFont(btnFont);

#pragma endregion

#pragma region Colors
	btn0->SetBackgroundColour(wxColor(204, 25, 12));
	btn1->SetBackgroundColour(wxColor(204, 25, 12));
	btn2->SetBackgroundColour(wxColor(204, 25, 12));
	btn3->SetBackgroundColour(wxColor(204, 25, 12));
	btn4->SetBackgroundColour(wxColor(204, 25, 12));
	btn5->SetBackgroundColour(wxColor(204, 25, 12));
	btn6->SetBackgroundColour(wxColor(204, 25, 12));
	btn7->SetBackgroundColour(wxColor(204, 25, 12));
	btn8->SetBackgroundColour(wxColor(204, 25, 12));
	btn9->SetBackgroundColour(wxColor(204, 25, 12));
	backBtn->SetBackgroundColour(wxColor(204, 25, 12));
	equalsBtn->SetBackgroundColour(wxColor(204, 25, 12));
	addBtn->SetBackgroundColour(wxColor(204, 25, 12));
	subtractBtn->SetBackgroundColour(wxColor(204, 25, 12));
	multiplyBtn->SetBackgroundColour(wxColor(204, 25, 12));
	divideBtn->SetBackgroundColour(wxColor(204, 25, 12));
	binBtn->SetBackgroundColour(wxColor(204, 25, 12));
	hexBtn->SetBackgroundColour(wxColor(204, 25, 12));
	modBtn->SetBackgroundColour(wxColor(204, 25, 12));
	negBtn->SetBackgroundColour(wxColor(204, 25, 12));
	decBtn->SetBackgroundColour(wxColor(204, 25, 12));
	//Foreground=============================================
	btn0->SetForegroundColour(wxColor(235, 224, 223));
	btn1->SetForegroundColour(wxColor(235, 224, 223));
	btn2->SetForegroundColour(wxColor(235, 224, 223));
	btn3->SetForegroundColour(wxColor(235, 224, 223));
	btn4->SetForegroundColour(wxColor(235, 224, 223));
	btn5->SetForegroundColour(wxColor(235, 224, 223));
	btn6->SetForegroundColour(wxColor(235, 224, 223));
	btn7->SetForegroundColour(wxColor(235, 224, 223));
	btn8->SetForegroundColour(wxColor(235, 224, 223));
	btn9->SetForegroundColour(wxColor(235, 224, 223));
	backBtn->SetForegroundColour(wxColor(235, 224, 223));
	equalsBtn->SetForegroundColour(wxColor(235, 224, 223));
	addBtn->SetForegroundColour(wxColor(235, 224, 223));
	subtractBtn->SetForegroundColour(wxColor(235, 224, 223));
	multiplyBtn->SetForegroundColour(wxColor(235, 224, 223));
	divideBtn->SetForegroundColour(wxColor(235, 224, 223));
	binBtn->SetForegroundColour(wxColor(235, 224, 223));
	hexBtn->SetForegroundColour(wxColor(235, 224, 223));
	modBtn->SetForegroundColour(wxColor(235, 224, 223));
	negBtn->SetForegroundColour(wxColor(235, 224, 223));
	decBtn->SetForegroundColour(wxColor(235, 224, 223));
#pragma endregion

}

Main::~Main()
{

}

void Main::OnButtonClick(wxCommandEvent& evt) 
{
#pragma region Button Setup
	if (evt.GetId() == 100)
	{
		
	}
#pragma endregion
	if (evt.GetId() == 99)
	{
		// Backspace/Clear
		text->Clear();
	}
	else if (evt.GetId() == 100)
	{
		//=
		text->AppendText("=");
		/*last = text->GetValue();
		Op2 = wxAtof(last);

		switch (Operators)
		{
		case 1:
			ans = Op1 + Op2;
			Res = wxString::Format(wxT("%f"), ans);
			text->SetValue(Res);
			break;

		case 2:
			ans = Op1 - Op2;
			Res = wxString::Format(wxT("%f"), ans);
			text->SetValue(Res);
			break;

		case 3:
			ans = Op1 * Op2;
			Res = wxString::Format(wxT("%f"), ans);
			text->SetValue(Res);
			break;

		case 4:
			ans = Op1 / Op2;
			Res = wxString::Format(wxT("%f"), ans);
			text->SetValue(Res);
			break;

		case 5:
			ans = fmod(Op1, Op2);
			Res = wxString::Format(wxT("%f"), ans);
			text->SetValue(Res);
			break;
		}*/
	}
	else if (evt.GetId() == 101)
	{
		//+
		text->AppendText("+");
		/*first = text->GetValue();
		Op1 = wxAtof(first);
		Operators = 1;
		text->SetValue("0");*/
	}
	else if (evt.GetId() == 102)
	{
		//-
		text->AppendText("-");
		/*first = text->GetValue();
		Op1 = wxAtof(first);
		Operators = 2;
		text->SetValue("0");*/
	}
	else if (evt.GetId() == 103)
	{
		//*
		text->AppendText("*");
		/*first = text->GetValue();
		Op1 = wxAtof(first);
		Operators = 3;
		text->SetValue("0");*/
	}
	else if (evt.GetId() == 104)
	{
		// /
		text->AppendText("/");
		/*first = text->GetValue();
		Op1 = wxAtof(first);
		Operators = 4;
		text->SetValue("0");*/
	}
	else if (evt.GetId() == 105)
	{
		// Binary

	}
	else if (evt.GetId() == 106)
	{
		// Hex

	}
	else if (evt.GetId() == 107)
	{
		// %
		text->AppendText("%");
		/*first = text->GetValue();
		Op1 = wxAtof(first);
		Operators = 5;
		text->SetValue("0");*/
	}
	else if (evt.GetId() == 108)
	{
		// negative
		text->AppendText("-");
		/*first = text->GetValue();
		text->Clear();
		int checkNeg = wxAtof(first);
		if (checkNeg > 0)
		{
			text->SetValue("-");
			text->AppendText(first);
		}
		else
		{
			ans = neg * -1;
			negStr = wxString::Format(wxT("%g"), ans);
			text->SetValue(negStr);
		}*/
	}
	else if (evt.GetId() == 109)
	{
		//decimal
		text->AppendText(".");
	}
	else if (evt.GetId() == 0)
	{
		if (text->GetValue()== "0")
		{
			text->SetValue("0");
		}
		else
		{
			text->AppendText("0");
		}
	}
	else if (evt.GetId() == 1)
	{
		if (text->GetValue() == "0")
		{
			text->SetValue("1");
		}
		else
		{
			text->AppendText("1");
		}
	}
	else if (evt.GetId() == 2)
	{
		if (text->GetValue() == "0")
		{
			text->SetValue("2");
		}
		else
		{
			text->AppendText("2");
		}
	}
	else if (evt.GetId() == 3)
	{
		if (text->GetValue() == "0")
		{
			text->SetValue("3");
		}
		else
		{
			text->AppendText("3");
		}
	}
	else if (evt.GetId() == 4)
	{
		if (text->GetValue() == "0")
		{
			text->SetValue("4");
		}
		else
		{
			text->AppendText("4");
		}
	}
	else if (evt.GetId() == 5)
	{
	if (text->GetValue() == "0")
	{
		text->SetValue("5");
	}
	else
	{
		text->AppendText("5");
	}
	}
	else if (evt.GetId() == 6)
	{
	if (text->GetValue() == "0")
	{
		text->SetValue("6");
	}
	else
	{
		text->AppendText("6");
	}
	}
	else if (evt.GetId() == 7)
	{
	if (text->GetValue() == "0")
	{
		text->SetValue("7");
	}
	else
	{
		text->AppendText("7");
	}
	}
	else if (evt.GetId() == 8)
	{
	if (text->GetValue() == "0")
	{
		text->SetValue("8");
	}
	else
	{
		text->AppendText("8");
	}
	}
	else if (evt.GetId() == 9)
	{
	if (text->GetValue() == "0")
	{
		text->SetValue("9");
	}
	else
	{
		text->AppendText("9");
	}
	}
	evt.Skip();
}