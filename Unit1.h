//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
#include <Vcl.Menus.hpp>
#include <Data.DB.hpp>
#include <Data.Win.ADODB.hpp>
#include <Vcl.DBCtrls.hpp>
#include <Vcl.Mask.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TMainMenu *MainMenu1;
	TGroupBox *GroupBox1;
	TImage *Image1;
	TDBEdit *DBEdit1;
	TADOConnection *ADOConnection1;
	TADOTable *ADOTable1;
	TDataSource *DataSource1;
	TDBText *DBTextfamiliya;
	TDBText *DBText_klass;
	TDBText *DBText_biletturi;
	TDBText *DBTextsana;
	TDBText *DBTextqayerdan;
	TDBText *DBTextqayerga;
	TDBText *DBTextmaxsusbelgi;
	TDBText *DBTextamalqilishi;
	TDBText *DBTextnarxi;
	TDBText *DBTextbiletraqami;
	TLabel *Label1;
	TDBComboBox *DBComboBox1;
	TLabel *Label2;
	TDBComboBox *DBComboBox2;
	TLabel *Label3;
	TDBEdit *DBEdit2;
	TLabel *Label4;
	TLabel *Label5;
	TDBEdit *DBEdit3;
	TLabel *Label6;
	TDBComboBox *DBComboBox3;
	TLabel *Label7;
	TDBComboBox *DBComboBox4;
	TLabel *Label8;
	TDBEdit *DBEdit4;
	TLabel *Label9;
	TDBEdit *DBEdit5;
	TLabel *Label10;
	TDBEdit *DBEdit6;
	TDBNavigator *DBNavigator1;
	void __fastcall DBComboBox2Change(TObject *Sender);
	void __fastcall DBEdit2Change(TObject *Sender);
	void __fastcall DBEdit1Change(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
