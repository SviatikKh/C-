//������ "˳��"
#include <vcl.h>
#pragma hdrstop
#include "UnitMain.h"
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormMain *FormMain;

//���� ����:
char state_lift;    		//t - ��� ���� �����, b - ��� ���� ����
char state_door = 'z';    		//v - ������������ ����, z - ������������ ����
int pos_d, d_width; 		//������ ������ (������� �� ������)
int pos_current, pos_stop;	//������� ���� (������� �� ������)
int height_floor;			//������ �������
int count_floor;			//������� ��������
int floor_from, floor_to;	//������� ������� �� ���� ���� ����
int time_wait = 10, iter_wait = 0;	//����� ����������, �� ���� ��������

__fastcall TFormMain::TFormMain(TComponent* Owner) : TForm(Owner)
{
GridHouse->Row = GridHouse->RowCount - 1;
//vysota poverhu
height_floor = PanelRight->Height / GridHouse->RowCount;
//kilkist poverhiv
count_floor = GridHouse->RowCount;
//shyryna dverei lifta
d_width = (PanelLift->Width - 2) / 2;
//pochatkovyj stan dverej zachyneni
pos_d = d_width;
PanelDLeft->Width = d_width;
PanelDRight->Width = d_width;
}

//���������� �� ����������� �������� ��������� ����
void TFormMain::PositionLift(int floor)
{
 for (int i = 0; i < ComponentCount; i++)
 {
   TStringGrid *Sg;
   Sg = dynamic_cast<TStringGrid*>(Components[i]);
   if (Sg && Sg->Name != "GridHouse")
   {
	 Sg->Row = floor;
   }
 }
}
//� ��������� ������� ����������� ����
int TFormMain::Floor()
{
 int fl = PanelLift->Top / height_floor;
 PositionLift(fl);
 return fl;
}
//������������ ����������� ����� ����������
void __fastcall TFormMain::FormActivate(TObject *Sender)
{
floor_from = 1;
floor_to = 1;
state_door = 'z';
PositionLift(GridHouse->RowCount - 1);
}
//��������� ����� � ������� �������
void __fastcall TFormMain::GroupFloorClick(TObject *Sender)
{
 floor_to = StrToInt(GroupFloor->Items->Strings[GroupFloor->ItemIndex]);
 //jakshcho lift znahodytsia na poversi
 if (floor_from == floor_to)
 {
  //i dveri zachyneni to vony vidvhyniajutsia
   if (state_door == 'z')
	{
	  state_door = 'v';
	  TimerDoor->Enabled = true;
	}
 }
 //jakshcho lift vyklykanyj z inshogo poverhu to vony zachyniajutsia
	 else
		{
		 if (state_door == 'v')
		 {
			 state_door == 'z';
			 TimerDoor->Enabled = true;
		 }
		  else
		  {
		  //posycia kincia ruhu lifta
		  pos_stop = (count_floor - floor_to) * height_floor;
		  //pozycia pochaku ruhu lifta
		  pos_current = PanelLift->Top;
		  if(pos_current < pos_stop) state_lift = 'b';
		  else state_lift = 't';
		  TimerMove->Enabled = true;
		  }

		}
  //GroupFloor->ItemIndex = -1;
}
//��������� ����� � �����
void __fastcall TFormMain::GroupLiftClick(TObject *Sender)
{
 GroupFloor->ItemIndex = -1;
 floor_to = StrToInt(GroupLift->Items->Strings[GroupLift->ItemIndex]);
 //jakshcho lift znahodytsia na poversi
 if(floor_from = floor_to)
 {
	//i dveri zachyneni to vony zachymiajutsia
	if (state_door == 'z')
		 {
			 state_door == 'v';
			 TimerDoor->Enabled = true;
		 }
 }
	//jakshcho lift vyklykanyj z inshoho poverhu
		else
		{
		 if (state_door == 'v')
		 {
			 state_door == 'z';
			 TimerDoor->Enabled = true;
		 
		}
		else
		{
		//pozycia kincia ruhu lifta
		pos_stop = (count_floor - floor_to) * height_floor;
		//pozycia pochatku ruhu lifta
		pos_current = PanelLift->Top;
		if(pos_current < pos_stop) state_lift = 'b'; // napriam ruhu vverh
		else state_lift = 't';  //napriam ruhu vnyz
		TimerMove->Enabled = true;
		}
		}
}
//��������� ������ ������ ����
void __fastcall TFormMain::TimerDoorTimer(TObject *Sender)
{
 switch (state_door) 
 {
  case 'v': pos_d -=5;
			if(pos_d >= 5)
			{
			   PanelDLeft->Width = pos_d;
			   PanelDRight->Width = pos_d;
			}
			else
			{
			 GroupLift->Visible = true;
			 GroupLift->ItemIndex = -1;
			 TimerDoor->Enabled = false;
			 iter_wait = 0;
			 TimerWait->Enabled = true;
			}   
			break ;
  case 'z': pos_d +=5;
			if(pos_d<=d_width)
			{
			 GroupLift->Visible = false;
			 PanelDLeft->Width = pos_d;
			 PanelDRight->Width = pos_d;
			}
			else
			{
				TimerDoor->Enabled = false;
				if(floor_to != floor_from)
				{
				  pos_stop = (count_floor - floor_to) * height_floor;
				  pos_current = PanelLift->Top;
				  if(pos_current < pos_stop) state_lift = 'b';
				  else state_lift = 't';
				  TimerMove->Enabled = true;
				}
			}
			break ;
 }
 GroupFloor->ItemIndex = -1;
}
//��������� ����� ����
void __fastcall TFormMain::TimerMoveTimer(TObject *Sender)
{
 switch (state_lift)
 {
   case 'b': pos_current+=5;
			if(pos_current <= pos_stop)
			{
			 PanelLift->Top = pos_current;
			 Floor();
			}
			else
			{
			 TimerMove->Enabled = false;
			 GroupFloor->Enabled = true;
			 state_door = 'v';
			 TimerDoor->Enabled = true;
			 floor_from = floor_to;
			}
	 break;
   case 't': pos_current -=5;
				if(pos_current >=pos_stop)
				{
				 PanelLift->Top = pos_current;
				 Floor();
				}
				else
				{
				 TimerMove->Enabled = false;
				 GroupFloor->Enabled = true;
				 state_door = 'v';
				TimerDoor->Enabled = true;
				floor_from = floor_to;
				}
				break;
 }
 GroupFloor->ItemIndex = -1;
}
//³���������� ����
void __fastcall TFormMain::GridHouseDrawCell(TObject *Sender, int ACol, int ARow,
		  TRect &Rect, TGridDrawState State)
{
 Rect = GridHouse->CellRect(ACol, ARow);
 GridHouse->Canvas->StretchDraw(Rect, Image->Picture->Graphic);
}
//
void __fastcall TFormMain::TimerWaitTimer(TObject *Sender)
{
 iter_wait++;
 if (iter_wait > time_wait)
 {
  TimerWait->Enabled = false;
  state_door = 'z';
  TimerDoor->Enabled = true;
 }
}
//---------------------------------------------------------------------------

