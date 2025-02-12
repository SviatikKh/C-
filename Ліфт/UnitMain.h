//---------------------------------------------------------------------------

#ifndef UnitMainH
#define UnitMainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.jpeg.hpp>
//---------------------------------------------------------------------------
class TFormMain : public TForm
{
__published:	// IDE-managed Components
	TStringGrid *GridHouse;
	TPanel *PanelRight;
	TRadioGroup *GroupFloor;
	TPanel *PanelLift;
	TTimer *TimerMove;
	TRadioGroup *GroupLift;
	TTimer *TimerDoor;
	TPanel *PanelDLeft;
	TPanel *PanelDRight;
	TPanel *PanelFloor;
	TStringGrid *GridFloor1;
	TStringGrid *GridFloor4;
	TStringGrid *GridFloor3;
	TStringGrid *GridFloor2;
	TStringGrid *GridFloor5;
	TImage *Image;
	TTimer *TimerWait;
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall GroupFloorClick(TObject *Sender);
	void __fastcall TimerMoveTimer(TObject *Sender);
	void __fastcall TimerDoorTimer(TObject *Sender);
	void __fastcall GridHouseDrawCell(TObject *Sender, int ACol, int ARow, TRect &Rect,
		  TGridDrawState State);
	void __fastcall GroupLiftClick(TObject *Sender);
	void __fastcall TimerWaitTimer(TObject *Sender);


private:	// User declarations
public:		// User declarations
	__fastcall TFormMain(TComponent* Owner);
	void PositionLift(int floor);
	int Floor();
};
//---------------------------------------------------------------------------
extern PACKAGE TFormMain *FormMain;
//---------------------------------------------------------------------------
#endif
