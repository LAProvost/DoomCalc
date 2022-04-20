#include "Main.h"
#include "Factory.h"
#include <sstream>
#include <string>
#include <Iomanip>

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
	text = new wxTextCtrl(this, wxID_ANY, "", wxPoint(10, 10), wxSize(320, 60), wxTE_RIGHT);
	text->SetFont(font);

	Factory fact(this);
	backBtn = fact.MakeClearBtn();
	equalsBtn = fact.MakeEqualBtn();
	addBtn = fact.MakeAddBtn();
	subtractBtn = fact.MakeSubtractBtn();
	multiplyBtn = fact.MakeMuiltBtn();
	divideBtn = fact.MakeDivideBtn();
	modBtn = fact.MakeModBtn();
	negBtn = fact.MakeNegBtn();
	decBtn = fact.MakeDecBtn();
	binBtn = fact.MakeBinaryBtn();
	hexBtn = fact.MakeHexBtn();
	btn0 = fact.Make0Btn();
	btn1 = fact.Make1Btn();
	btn2 = fact.Make2Btn();
	btn3 = fact.Make3Btn();
	btn4 = fact.Make4Btn();
	btn5 = fact.Make5Btn();
	btn6 = fact.Make6Btn();
	btn7 = fact.Make7Btn();
	btn8 = fact.Make8Btn();
	btn9 = fact.Make9Btn();
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
		first = text->GetValue();
		Op1 = wxAtof(first);

		int binary = 0, remainder, product = 1;
		while (Op1 != 0)
		{
			remainder = (int)Op1 % 2;
			binary = binary + (remainder * product);
			Op1 = Op1 / 2;
			product *= 10;
		}
		Res = wxString::Format(wxT("%f"), (float)binary);
		text->SetValue(Res);
	}
	else if (evt.GetId() == 106)
	{
		// Hex
		first = text->GetValue();
		Op1 = wxAtof(first);
		std::stringstream ss;

		ss << std::hex << (int)Op1;
		std::string hexed(ss.str());
		text->SetValue("0x");
		text->AppendText(hexed);
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