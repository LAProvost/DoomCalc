#pragma once
#include "wx/wx.h"

class Main : public wxFrame
{
public:
	Main();
	~Main();
	void OnButtonClick(wxCommandEvent& evt);
	wxDECLARE_EVENT_TABLE();

public:
	wxTextCtrl* text = nullptr;
	wxTextCtrl* title = nullptr;
	wxButton* backBtn = nullptr;
	//============================
	wxButton* equalsBtn = nullptr;
	wxButton* addBtn = nullptr;
	wxButton* subtractBtn = nullptr;
	wxButton* multiplyBtn = nullptr;
	wxButton* divideBtn = nullptr;
	wxButton* modBtn = nullptr;
	wxButton* negBtn = nullptr;
	wxButton* decBtn = nullptr;
	wxButton* binBtn = nullptr;
	wxButton* hexBtn = nullptr;
	//============================
	wxButton* btn0 = nullptr;
	wxButton* btn1 = nullptr;
	wxButton* btn2 = nullptr;
	wxButton* btn3 = nullptr;
	wxButton* btn4 = nullptr;
	wxButton* btn5 = nullptr;
	wxButton* btn6 = nullptr;
	wxButton* btn7 = nullptr;
	wxButton* btn8 = nullptr;
	wxButton* btn9 = nullptr;
	//============================
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

