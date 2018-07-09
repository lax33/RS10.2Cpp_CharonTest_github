//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <stdexcept>
#include <string>
#include "Unit1.h"
#include "File1.h"

#include <Vcl.FileCtrl.hpp>
using namespace std;

//
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm2 *Form2;
//  преобразование из  UnicodeString в char.
char* UcToAscii(UnicodeString us)
 {
	wchar_t* wstr = us.c_str();
	char* ascii = new char[wcslen(wstr) + 1];

	unsigned int i;
	for( i=0; i<=strlen(ascii); i++)
	{
	  ascii[i]=(char)wstr[i];
	}

	return ascii;
}


//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{

}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button1Click(TObject *Sender)
{
	try
	{
		IdTCPClient1->Host = Edit2->Text;  // IP adress
		IdTCPClient1->Port =  Edit3->Text.ToInt() ;   // Port

		IdTCPClient1->ReadTimeout = Edit4->Text.ToInt();
		IdTCPClient1->ConnectTimeout = Edit5->Text.ToInt();

		IdTCPClient1->Connect();
		Label12->Caption="Удачно";

		Label3->Caption=strlen(pBuf );

		Label13->CleanupInstance();

		IdTCPClient1->Socket->WriteLn(pBuf);

		rBuf = UcToAscii(IdTCPClient1->Socket->ReadLn());
		Label13->Caption = rBuf;

		IdTCPClient1->Disconnect();

	  }

	 catch (...)
	 {
	   IdTCPClient1->Disconnect();
	   Label12->Caption="Не удачно";
	 }


}
//---------------------------------------------------------------------------

void __fastcall TForm2::Button2Click(TObject *Sender)
{
	Label13->CleanupInstance();

	Label12->Caption="" ;
}
//---------------------------------------------------------------------------



void __fastcall TForm2::RadioButton1Click(TObject *Sender)
{
pBuf = "otau_get_count_channels";
}
//---------------------------------------------------------------------------

void __fastcall TForm2::RadioButton2Click(TObject *Sender)
{
 pBuf = "get_rtu_number";
}
//---------------------------------------------------------------------------

void __fastcall TForm2::RadioButton3Click(TObject *Sender)
{
pBuf = "otau_set_channel 3";
}
//---------------------------------------------------------------------------

void __fastcall TForm2::RadioButton4Click(TObject *Sender)
{
pBuf = "otau_get_channel";
}
//---------------------------------------------------------------------------

 void __fastcall TForm2::RadioButton5Click(TObject *Sender)
{
//pBuf = UcToAscii(Edit10->Text);
pBuf = Edit10->Text;
}
//---------------------------------------------------------------------------


void __fastcall TForm2::Button3Click(TObject *Sender) // кнопка "Start"
{
 //Zikl zicl = new Zicl ();
 //TThread::zikl(false);
	int i=1;
	stop=0;
	int bad=0;
	int good=0;
	Edit8->Text = 0;
	Edit7->Text = 0;
		while (stop==0)
	{      try
		{
		Edit6->Text= i;
		 //-------
		IdTCPClient1->Host = Edit2->Text;  // IP adress
		IdTCPClient1->Port =  Edit3->Text.ToInt() ;   // Port

		IdTCPClient1->ReadTimeout = Edit4->Text.ToInt();
		IdTCPClient1->ConnectTimeout = Edit5->Text.ToInt();

		IdTCPClient1->Connect() ;
		Label13->CleanupInstance();

		IdTCPClient1->Socket->WriteLn(pBuf);

		Label13->Caption = IdTCPClient1->Socket->ReadLn();

		IdTCPClient1->Disconnect();

		 //------
		Edit7->Text = ++good;
		Sleep (Edit9->Text.ToInt());
		}

		catch (...)
		{
			Edit8->Text = ++bad;
			IdTCPClient1->Disconnect();
		}

		++i;
	 };

}
//---------------------------------------------------------------------------



void __fastcall TForm2::Button4Click(TObject *Sender)
{
    stop = 1;
}
//---------------------------------------------------------------------------
  //nmn













