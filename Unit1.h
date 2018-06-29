//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <IdBaseComponent.hpp>
#include <IdComponent.hpp>
#include <IdTCPClient.hpp>
#include <IdTCPConnection.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <IdAntiFreeze.hpp>
#include <IdAntiFreezeBase.hpp>
//---------------------------------------------------------------------------
class TForm2 : public TForm
{
__published:	// IDE-managed Components
	TEdit *Edit1;
	TIdTCPClient *IdTCPClient1;
	TLabel *Label1;
	TLabel *Label2;
	TLabel *Label3;
	TRadioButton *RadioButton1;
	TEdit *Edit2;
	TLabel *Label4;
	TEdit *Edit3;
	TLabel *Label5;
	TButton *Button1;
	TButton *Button2;
	TLabel *Label6;
	TLabel *Label7;
	TEdit *Edit4;
	TEdit *Edit5;
	TRadioButton *RadioButton2;
	TRadioButton *RadioButton3;
	TButton *Button3;
	TButton *Button4;
	TEdit *Edit6;
	TLabel *Label8;
	TEdit *Edit7;
	TEdit *Edit8;
	TLabel *Label9;
	TLabel *Label10;
	TRadioButton *RadioButton4;
	TIdAntiFreeze *IdAntiFreeze1;
	TEdit *Edit9;
	TLabel *Label11;
	TLabel *Label12;
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall RadioButton1Click(TObject *Sender);
	void __fastcall RadioButton2Click(TObject *Sender);
	void __fastcall RadioButton3Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall RadioButton4Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);




private:	// User declarations
public:		// User declarations

	__fastcall TForm2(TComponent* Owner);
};


//---------------------------------------------------------------------------
extern PACKAGE TForm2 *Form2;
//---------------------------------------------------------------------------
#endif


