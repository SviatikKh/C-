//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.FileCtrl.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TEditGRN : public TForm
{
__published:	// IDE-managed Components
	TPageControl *Pager;
	TTabSheet *SheetTablo;
	TStringGrid *Grid;
	TTabSheet *SheetTools;
	TStringGrid *GridPrice;
	TFileListBox *FileList;
	TGroupBox *BoxPrice;
	TPanel *PanelPrice;
	TLabel *LabelName;
	TButton *ButPost;
	TLabel *LabelGRN;
	TLabel *LabelKOP;
	TEdit *EditGRN;
	TEdit *EditKOP;
	TPanel *Panel;
	TGroupBox *BoxPriceT;
	TGroupBox *BoxWeigh;
	TButton *ButtonSuma;
	TLabel *LabelNameT;
	TLabel *LabelSuma;
	TLabel *LabelValue;
	TLabel *LabelGRNT;
	TLabel *LabelKOPT;
	TEdit *EditGRNT;
	TEdit *EditKOPT;
	TLabel *LabelGRNW;
	TLabel *LabelKOPTW;
	TEdit *EditGRNW;
	TEdit *EditKOPTW;
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall GridDrawCell(TObject *Sender, int ACol, int ARow, TRect &Rect, TGridDrawState State);
	void __fastcall GridSelectCell(TObject *Sender, int ACol, int ARow, bool &CanSelect);
	void __fastcall GridClick(TObject *Sender);
	void __fastcall EditGRNWKeyPress(TObject *Sender, System::WideChar &Key);
	void __fastcall GridPriceClick(TObject *Sender);
	void __fastcall ButPostClick(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall ButtonSumaClick(TObject *Sender);


private:	// User declarations
public:		// User declarations
	__fastcall TEditGRN(TComponent* Owner);
	UnicodeString GetPrice (int row);
	UnicodeString GetName(UnicodeString FileName);
	 void FillGridPrice();
	 int GetRowPrice(UnicodeString name);
	 void  SavePrice() ;
	 bool  LoadPrice();
};
//---------------------------------------------------------------------------
extern PACKAGE TEditGRN *EditGRN;
//---------------------------------------------------------------------------
#endif
