#pragma once
#include "wx/wx.h"
#include <vector>
#include "Main.h"

class Factory
{
private:
	Main* temp;
public:
	Factory(Main* temp);
	//============================
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
	wxButton* MakeText();
	wxButton* MakeAddBtn();
	wxButton* MakeSubtractBtn();
	wxButton* MakeDivideBtn();
	wxButton* MakeModBtn();
	wxButton* MakeBinaryBtn();
	wxButton* MakeHexBtn();
	wxButton* MakeMuiltBtn();
	wxButton* MakeNegBtn();
	wxButton* MakeDecBtn();
	wxButton* MakeEqualBtn();
	wxButton* MakeClearBtn();
	wxButton* Make1Btn();
	wxButton* Make2Btn();
	wxButton* Make3Btn();
	wxButton* Make4Btn();
	wxButton* Make5Btn();
	wxButton* Make6Btn();
	wxButton* Make7Btn();
	wxButton* Make8Btn();
	wxButton* Make9Btn();
	wxButton* Make0Btn();
};

