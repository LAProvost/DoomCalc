#include "Main.h"
#include "Factory.h"
#include "Processor.h"

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
	proc = &Processor::getInstance();
	proc->CreateTxtWindow(this);

#pragma region Buttons
	Factory fact = Factory(this);
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
#pragma endregion
}

Main::~Main()
{

}

void Main::OnButtonClick(wxCommandEvent& evt)
{
	proc->ButtonClick(evt);
}