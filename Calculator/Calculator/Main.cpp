#include "Main.h"
#pragma region Event Table
wxBEGIN_EVENT_TABLE(Main, wxFrame)
	EVT_BUTTON(100, OnButtonClick)
wxEND_EVENT_TABLE();
#pragma endregion

Main::Main() : wxFrame(nullptr, wxID_ANY, "Doom Calculator", wxPoint(200, 200), wxSize(500, 600)) 
{
#pragma region Toolbox
	//title = new wxTextCtrl(this, wxID_ANY, "DOOM CALCULATOR", wxPoint(93, 10), wxSize(320, 60));
	text = new wxTextCtrl(this, wxID_ANY, "", wxPoint(10, 145), wxSize(320, 60));
	backBtn = new wxButton(this, 99, "Backspace", wxPoint(377, 145), wxSize(100, 60));
	equalsBtn = new wxButton(this, 100, "=", wxPoint(377, 495), wxSize(100, 60));
	addBtn = new wxButton(this, 101, "+", wxPoint(377, 425), wxSize(100, 60));
	subtractBtn = new wxButton(this, 102, "-", wxPoint(377, 355), wxSize(100, 60));
	multiplyBtn = new wxButton(this, 103, "*", wxPoint(377, 285), wxSize(100, 60));
	divideBtn = new wxButton(this, 104, "/", wxPoint(377, 215), wxSize(100, 60));
	binBtn = new wxButton(this, 105, "Binary", wxPoint(120, 215), wxSize(100, 60));
	hexBtn = new wxButton(this, 106, "Hex", wxPoint(10, 215), wxSize(100, 60));
	modBtn = new wxButton(this, 107, "%", wxPoint(230, 215), wxSize(100, 60));
	negBtn = new wxButton(this, 108, "negative", wxPoint(10, 495), wxSize(100, 60));
	decBtn = new wxButton(this, 109, ".", wxPoint(230, 495), wxSize(100, 60));
	btn0 = new wxButton(this, 0, "0", wxPoint(120, 495), wxSize(100, 60));
	btn1 = new wxButton(this, 1, "1", wxPoint(10, 425), wxSize(100, 60));
	btn2 = new wxButton(this, 2, "2", wxPoint(120, 425), wxSize(100, 60));
	btn3 = new wxButton(this, 3, "3", wxPoint(230, 425), wxSize(100, 60));
	btn4 = new wxButton(this, 4, "4", wxPoint(10, 355), wxSize(100, 60));
	btn5 = new wxButton(this, 5, "5", wxPoint(120, 355), wxSize(100, 60));
	btn6 = new wxButton(this, 6, "6", wxPoint(230, 355), wxSize(100, 60));
	btn7 = new wxButton(this, 7, "7", wxPoint(10, 285), wxSize(100, 60));
	btn8 = new wxButton(this, 8, "8", wxPoint(120, 285), wxSize(100, 60));
	btn9 = new wxButton(this, 9, "9", wxPoint(230, 285), wxSize(100, 60));
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
		text->SetValue("");
	}
#pragma endregion
	if (evt.GetId() == 99)
	{

	}
	if (evt.GetId() == 100)
	{
		
	}
	if (evt.GetId() == 101)
	{
		
	}
	if (evt.GetId() == 102)
	{
		
	}
	if (evt.GetId() == 103)
	{
		
	}
	if (evt.GetId() == 104)
	{
		
	}
	evt.Skip();
}