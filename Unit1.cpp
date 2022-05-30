//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm1::DBComboBox2Change(TObject *Sender)
{
//2 ta - Biznes-120 m, Ekonom-77 m
//dbedit5 - narxi
	if (DBComboBox2->ItemIndex == 0)
	{
	DBEdit5->Text = "120000";
	}
	if (DBComboBox2->ItemIndex == 1)
	{
	DBEdit5->Text = "77000";
	}

}
//---------------------------------------------------------------------------
void __fastcall TForm1::DBEdit2Change(TObject *Sender)
{  //dbedit3
	int raqam;
	Randomize();
	raqam = Random(1000000);
	DBEdit3->Text = IntToStr(raqam);
	////////
	//dbedit4
	TDateTime sana = Date();
	sana += 7.0;
	DBEdit4->Text =  sana;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::DBEdit1Change(TObject *Sender)
{
//dbedit2
TDateTime sana = Date();
DBEdit2->Text = sana;
}
//---------------------------------------------------------------------------
