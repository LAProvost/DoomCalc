#pragma once
#include "Main.h"
#include <sstream>
#include <string>
#include <Iomanip>

class Processor
{
public:
	static Processor& getInstance() 
	{
		static Processor proc;
		return proc;
	}

public:
	Processor() = default;
	Processor(Processor const&) = delete;
	void operator = (Processor const&) = delete;
};

void Main::OnButtonClick(wxCommandEvent& evt)
{
	if (evt.GetId() == 99)
	{
		// Backspace/Clear
		text->Clear();
	}
	else if (evt.GetId() == 100)
	{
		//=
		//text->AppendText("=");
		last = text->GetValue();
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
		}
	}
	else if (evt.GetId() == 101)
	{
		//+
		//text->AppendText("+");
		first = text->GetValue();
		Op1 = wxAtof(first);
		Operators = 1;
		text->SetValue("0");
	}
	else if (evt.GetId() == 102)
	{
		//-
		//text->AppendText("-");
		first = text->GetValue();
		Op1 = wxAtof(first);
		Operators = 2;
		text->SetValue("0");
	}
	else if (evt.GetId() == 103)
	{
		//*
		//text->AppendText("*");
		first = text->GetValue();
		Op1 = wxAtof(first);
		Operators = 3;
		text->SetValue("0");
	}
	else if (evt.GetId() == 104)
	{
		// /
		//text->AppendText("/");
		first = text->GetValue();
		Op1 = wxAtof(first);
		Operators = 4;
		text->SetValue("0");
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
		//text->AppendText("%");
		first = text->GetValue();
		Op1 = wxAtof(first);
		Operators = 5;
		text->SetValue("0");
	}
	else if (evt.GetId() == 108)
	{
		// negative
		//text->AppendText("-");
		first = text->GetValue();
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
		}
	}
	else if (evt.GetId() == 109)
	{
		//decimal
		text->AppendText(".");
	}
	else if (evt.GetId() == 0)
	{
		if (text->GetValue() == "0")
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
