//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TEditGRN *EditGRN;
TPicture *Picture;
//---------------------------------------------------------------------------
__fastcall TEditGRN::TEditGRN(TComponent* Owner)
	: TForm(Owner)
{
 GridPrice -> Cells[0][0] = "�";
 GridPrice -> Cells[1][0] = "�����";
 GridPrice -> Cells[2][0] = "���.";
 GridPrice -> Cells[3][0] = "���.";
}
//���������� ����� ���� �� �����
UnicodeString TEditGRN::GetPrice (int row)
{
	UnicodeString price = "";
	if (GridPrice ->Cells[2][row] !="")
	 {
	   price += GridPrice ->Cells[2][row] + "���.";
	 }
	 if (GridPrice ->Cells[3][row] !="")
	 {
	   price += GridPrice ->Cells[3][row] + "���.";
	 }
	 return price;
}
//��������� ���� ������-������ � ���� ����� �� ����
UnicodeString TEditGRN::GetName(UnicodeString FileName)
{
 UnicodeString name = FileName;
 int len = name.Length();
 name = name.SubString(1, len - 4);
 return name;
 }
 //���������� ������� ��� �������������� ������-������ (� ���� �����)
 void TEditGRN::FillGridPrice()
 {
  GridPrice ->RowCount = FileList ->Count + 1;
  for (int i = 0; i < FileList->Count; i++)
  {
   GridPrice->Cells[0][i+1] = i+1;
   GridPrice->Cells[1][i+1] = GetName (FileList ->Items ->Strings[i]);
  }
 }
//���������� ������ ����� ������� ��� �� ������ ������-������
int TEditGRN::GetRowPrice(UnicodeString name)
{
 int row = 0;
 for (int i = 1; i < GridPrice->RowCount; i++)
 {
	if (GridPrice->Cells[1][i] == name)
	 {
	  row = i;
	  break;
	}
 }


 return row;
}

//���������� ������� ��� � ����
void  TEditGRN::SavePrice()
{
 TStringList * lst = new TStringList();
 lst->Clear();
 for (int i = 1; i < GridPrice->RowCount; i++)
 {
  lst->Add(GridPrice->Cells[1][i]);
  lst->Add(GridPrice->Cells[2][i]);
  lst->Add(GridPrice->Cells[3][i]);
 }
 lst->SaveToFile(ExtractFilePath(Application->ExeName) + "Price.txt");
 lst->Free();
}
//������������ ��� � �����
bool  TEditGRN::LoadPrice()
{
 bool y = FileExists(ExtractFilePath(Application->ExeName) + "Price.txt");
 if (y)
 {
   TStringList * lst = new TStringList();
   lst->LoadFromFile(ExtractFilePath(Application->ExeName) + "Price.txt");
   for (int i = 0; i < lst->Count; i += 3)
   {
	int row = GetRowPrice(lst->Strings[i]);
	if (row == 0) continue;
	else
	{
	 GridPrice->Cells[2][row] = lst->Strings[i + 1];
	 GridPrice->Cells[3][row] = lst->Strings[i + 2];
	}
   }

   lst->Free();
 }
 return y;
}





 //������������ ��������� ���������� �� ������� ������ �������
void __fastcall TEditGRN::FormActivate(TObject *Sender)
{
UnicodeString Folder = ExtractFilePath (Application ->ExeName) +"����";
if (!DirectoryExists (Folder))
{
 ShowMessage ("����� ���� �������");
 Close();
}
else
{
 FileList ->Directory = Folder;
 if (FileList ->Count < 10)
 {
	ShowMessage ("ʳ������ ���� ����� 10");
	Close();
 }
 else
 {
  Grid ->RowCount = FileList->Count / 10;
  if (FileList->Count % 10 > 0)
  {
	Grid ->RowCount ++;
  }
  FillGridPrice();
  LoadPrice();
  Grid->OnClick(this);
  GridPrice->OnClick(this);
 }
 }
}
//---------------------------------------------------------------------------
//³���������� ����� �� ����� ���������� ����-----------------

void __fastcall TEditGRN::GridDrawCell(TObject *Sender, int ACol, int ARow, TRect &Rect,
		  TGridDrawState State)
{
  //���������� ������� �������� ������ �����
  int n = ARow * 10 + ACol;
  if (n < FileList ->Count)
  {
   FileList ->ItemIndex = n;
   UnicodeString FileName =  ExtractFilePath(Application ->ExeName) +"����\\"+
							 FileList ->Items->Strings [n];
   UnicodeString name = GetName(FileList->Items->Strings[n]);
   UnicodeString price = GetPrice (n + 1);
   Picture = new TPicture ();
   Picture ->LoadFromFile(FileName);
   Rect = Grid->CellRect(ACol, ARow);
   Rect.left +=5;
   Rect.top +=15;
   Rect.right -=5;
   Rect.bottom -=15;
   Grid->Canvas->StretchDraw(Rect, Picture->Graphic);
   Grid->Canvas->TextOut(Rect.Left, Rect.Top - 12, name);
   Grid->Canvas->TextOut(Rect.Left, Rect.Bottom , price);
   Picture->Free();
  }
}
//---------------------------------------------------------------------------

void __fastcall TEditGRN::GridSelectCell(TObject *Sender, int ACol, int ARow, bool &CanSelect)

{
 int n = ARow *10 + ACol;
 CanSelect = n < FileList->Count;
}
//---------------------------------------------------------------------------

void __fastcall TEditGRN::GridClick(TObject *Sender)
{
int n = Grid->Row * 10 + Grid->Col + 1;
LabelNameT ->Caption = GridPrice->Cells[1][n];
EditGRNT ->Text = GridPrice->Cells[2][n];
EditKOPT ->Text = GridPrice->Cells[3][n];
LabelValue ->Caption = "";
EditGRNW ->Clear();
EditKOPTW ->Clear();
}
//---------------------------------------------------------------------------
void __fastcall TEditGRN::EditGRNWKeyPress(TObject *Sender, System::WideChar &Key)

{
 if (Key < '0' || Key > '9') Key = 0;
}
//---------------------------------------------------------------------------

void __fastcall TEditGRN::GridPriceClick(TObject *Sender)
{
 LabelName->Caption = GridPrice->Cells[1][GridPrice->Row];
 EditGRN->Text = GridPrice->Cells[2][GridPrice->Row];
 EditKOP->Text = GridPrice->Cells[3][GridPrice->Row];;
}
//---------------------------------------------------------------------------

void __fastcall TEditGRN::ButPostClick(TObject *Sender)
{
GridPrice->Cells[2][GridPrice->Row] = EditGRN->Text;
GridPrice->Cells[3][GridPrice->Row] = EditKOP->Text;
}
//---------------------------------------------------------------------------

void __fastcall TEditGRN::FormClose(TObject *Sender, TCloseAction &Action)
{
 SavePrice();
}
//---------------------------------------------------------------------------

void __fastcall TEditGRN::ButtonSumaClick(TObject *Sender)
{
 float x = 0;
 if (EditGRNT->Text != "") x = StrToFloat(EditGRNT->Text);
 if (EditKOPT->Text != "") x += StrToFloat(EditKOPT->Text) / 100;
 float y = 0;
 if (EditGRNW->Text != "") y = StrToFloat(EditGRNW->Text);
 if (EditKOPTW->Text  != "") y += StrToFloat(EditKOPTW->Text) / 1000;
 x *= y;
 LabelValue->Caption = FloatToStrF(x, ffFixed, 7, 2);
}
//---------------------------------------------------------------------------

