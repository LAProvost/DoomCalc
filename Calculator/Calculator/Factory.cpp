#include "Factory.h"
#include "wx/wx.h"

wxFont btnFont(15, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);

Factory::Factory(Main* temp_)
{
    temp = temp_;
}
wxButton* Factory::MakeAddBtn()
{
    addBtn = new wxButton(temp, 101, "+", wxPoint(377, 290), wxSize(100, 60));
    addBtn->SetBackgroundColour(wxColor(204, 25, 12));
    addBtn->SetForegroundColour(wxColor(235, 224, 223));
    addBtn->SetFont(btnFont);
    return addBtn;
}
wxButton* Factory::MakeSubtractBtn() 
{
    subtractBtn = new wxButton(temp, 102, "-", wxPoint(377, 220), wxSize(100, 60));
    subtractBtn->SetBackgroundColour(wxColor(204, 25, 12));
    subtractBtn->SetForegroundColour(wxColor(235, 224, 223));
    subtractBtn->SetFont(btnFont);
    return subtractBtn;
}
wxButton* Factory::MakeMuiltBtn() 
{
    multiplyBtn = new wxButton(temp, 103, "*", wxPoint(377, 150), wxSize(100, 60));
    multiplyBtn->SetBackgroundColour(wxColor(204, 25, 12));
    multiplyBtn->SetForegroundColour(wxColor(235, 224, 223));
    multiplyBtn->SetFont(btnFont);
    return multiplyBtn;
}
wxButton* Factory::MakeDivideBtn()
{
    divideBtn = new wxButton(temp, 104, "/", wxPoint(377, 80), wxSize(100, 60));
    divideBtn->SetBackgroundColour(wxColor(204, 25, 12));
    divideBtn->SetForegroundColour(wxColor(235, 224, 223));
    divideBtn->SetFont(btnFont);
    return divideBtn;
}
wxButton* Factory::MakeModBtn()
{
    modBtn = new wxButton(temp, 107, "%", wxPoint(230, 80), wxSize(100, 60));
    modBtn->SetBackgroundColour(wxColor(204, 25, 12));
    modBtn->SetForegroundColour(wxColor(235, 224, 223));
    modBtn->SetFont(btnFont);
    return modBtn;
}
wxButton* Factory::MakeBinaryBtn()
{
    binBtn = new wxButton(temp, 105, "Binary", wxPoint(120, 80), wxSize(100, 60));
    binBtn->SetBackgroundColour(wxColor(204, 25, 12));
    binBtn->SetForegroundColour(wxColor(235, 224, 223));
    binBtn->SetFont(btnFont);
    return binBtn;
}
wxButton* Factory::MakeHexBtn()
{
    hexBtn = new wxButton(temp, 106, "Hex", wxPoint(10, 80), wxSize(100, 60));
    hexBtn->SetBackgroundColour(wxColor(204, 25, 12));
    hexBtn->SetForegroundColour(wxColor(235, 224, 223));
    hexBtn->SetFont(btnFont);
    return hexBtn;
}
wxButton* Factory::MakeNegBtn()
{
    negBtn = new wxButton(temp, 108, "(-)", wxPoint(10, 360), wxSize(100, 60));
    negBtn->SetBackgroundColour(wxColor(204, 25, 12));
    negBtn->SetForegroundColour(wxColor(235, 224, 223));
    negBtn->SetFont(btnFont);
    return negBtn;
}
wxButton* Factory::MakeDecBtn()
{
    decBtn = new wxButton(temp, 109, ".", wxPoint(230, 360), wxSize(100, 60));
    decBtn->SetBackgroundColour(wxColor(204, 25, 12));
    decBtn->SetForegroundColour(wxColor(235, 224, 223));
    decBtn->SetFont(btnFont);
    return decBtn;
}
wxButton* Factory::MakeEqualBtn()
{
    equalsBtn = new wxButton(temp, 100, "=", wxPoint(377, 360), wxSize(100, 60));
    equalsBtn->SetBackgroundColour(wxColor(204, 25, 12));
    equalsBtn->SetForegroundColour(wxColor(235, 224, 223));
    equalsBtn->SetFont(btnFont);
    return equalsBtn;
}
wxButton* Factory::MakeClearBtn()
{
    backBtn = new wxButton(temp, 99, "Clear", wxPoint(377, 10), wxSize(100, 60));
    backBtn->SetBackgroundColour(wxColor(204, 25, 12));
    backBtn->SetForegroundColour(wxColor(235, 224, 223));
    backBtn->SetFont(btnFont);
    return backBtn;
}
wxButton* Factory::Make0Btn()
{
    btn0 = new wxButton(temp, 0, "0", wxPoint(120, 360), wxSize(100, 60));
    btn0->SetBackgroundColour(wxColor(204, 25, 12));
    btn0->SetForegroundColour(wxColor(235, 224, 223));
    btn0->SetFont(btnFont);
    return btn0;
}
wxButton* Factory::Make1Btn()
{
    btn1 = new wxButton(temp, 1, "1", wxPoint(10, 290), wxSize(100, 60));
    btn1->SetBackgroundColour(wxColor(204, 25, 12));
    btn1->SetForegroundColour(wxColor(235, 224, 223));
    btn1->SetFont(btnFont);
    return btn1;
}
wxButton* Factory::Make2Btn()
{
    btn2 = new wxButton(temp, 2, "2", wxPoint(120, 290), wxSize(100, 60));
    btn2->SetBackgroundColour(wxColor(204, 25, 12));
    btn2->SetForegroundColour(wxColor(235, 224, 223));
    btn2->SetFont(btnFont);
    return btn2;
}
wxButton* Factory::Make3Btn()
{
    btn3 = new wxButton(temp, 3, "3", wxPoint(230, 290), wxSize(100, 60));
    btn3->SetBackgroundColour(wxColor(204, 25, 12));
    btn3->SetForegroundColour(wxColor(235, 224, 223));
    btn3->SetFont(btnFont);
    return btn3;
}
wxButton* Factory::Make4Btn()
{
    btn4 = new wxButton(temp, 4, "4", wxPoint(10, 220), wxSize(100, 60));
    btn4->SetBackgroundColour(wxColor(204, 25, 12));
    btn4->SetForegroundColour(wxColor(235, 224, 223));
    btn4->SetFont(btnFont);
    return btn4;
}
wxButton* Factory::Make5Btn()
{
    btn5 = new wxButton(temp, 5, "5", wxPoint(120, 220), wxSize(100, 60));
    btn5->SetBackgroundColour(wxColor(204, 25, 12));
    btn5->SetForegroundColour(wxColor(235, 224, 223));
    btn5->SetFont(btnFont);
    return btn5;
}
wxButton* Factory::Make6Btn()
{
    btn6 = new wxButton(temp, 6, "6", wxPoint(230, 220), wxSize(100, 60));
    btn6->SetBackgroundColour(wxColor(204, 25, 12));
    btn6->SetForegroundColour(wxColor(235, 224, 223));
    btn6->SetFont(btnFont);
    return btn6;
}
wxButton* Factory::Make7Btn()
{
    btn7 = new wxButton(temp, 7, "7", wxPoint(10, 150), wxSize(100, 60));
    btn7->SetBackgroundColour(wxColor(204, 25, 12));
    btn7->SetForegroundColour(wxColor(235, 224, 223));
    btn7->SetFont(btnFont);
    return btn7;
}
wxButton* Factory::Make8Btn()
{
    btn8 = new wxButton(temp, 8, "8", wxPoint(120, 150), wxSize(100, 60));
    btn8->SetBackgroundColour(wxColor(204, 25, 12));
    btn8->SetForegroundColour(wxColor(235, 224, 223));
    btn8->SetFont(btnFont);
    return btn8;
}
wxButton* Factory::Make9Btn()
{
    btn9 = new wxButton(temp, 9, "9", wxPoint(230, 150), wxSize(100, 60));
    btn9->SetBackgroundColour(wxColor(204, 25, 12));
    btn9->SetForegroundColour(wxColor(235, 224, 223));
    btn9->SetFont(btnFont);
    return btn9;
}
