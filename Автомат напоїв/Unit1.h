//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ExtCtrls.hpp>
//---------------------------------------------------------------------------
class TFormMain : public TForm
{
__published:	// IDE-managed Components
	TPanel *PanelChoce;
	TBitBtn *But1;
	TBitBtn *But2;
	TBitBtn *But3;
	TBitBtn *But4;
	TBitBtn *But5;
	TBitBtn *But6;
	TBitBtn *But7;
	TBitBtn *But8;
	TLabel *LabelMessage;
	TLabel *LabelPrice;
	TPanel *PanelMoney;
	TImage *Im1;
	TImage *Im2;
	TImage *Im5;
	TPanel *Panel;
	TPanel *PanelCap;
	TImage *ImageCap;
	TButton *Button1;
	TTimer *Timer;
private:	// User declarations
public:		// User declarations
	__fastcall TFormMain(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormMain *FormMain;
//---------------------------------------------------------------------------
#endif
