#pragma once
#include "wx/wx.h"
#include <sstream>
#include <string>
#include <Iomanip>

class Main;

class Processor
{
public:
	static Processor& getInstance() 
	{
		static Processor proc;
		return proc;
	}

	void ButtonClick(wxCommandEvent& evt);

private:
	wxTextCtrl* text = nullptr;

public:
	Processor();
	Processor(Processor const&) = delete;
	void operator = (Processor const&) = delete;
	//=========================
	void CreateTxtWindow(Main* main);
	//=========================
	int Operators;
	float Op1;
	float Op2;
	float ans;
	int neg;
	wxString Res;
	wxString first;
	wxString last;
	wxString negStr;
};
