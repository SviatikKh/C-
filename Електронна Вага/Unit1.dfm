object EditGRN: TEditGRN
  Left = 0
  Top = 0
  Caption = 'EditGRN'
  ClientHeight = 516
  ClientWidth = 788
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnActivate = FormActivate
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 13
  object Pager: TPageControl
    AlignWithMargins = True
    Left = 3
    Top = 3
    Width = 782
    Height = 510
    ActivePage = SheetTablo
    Align = alClient
    TabOrder = 0
    ExplicitWidth = 621
    ExplicitHeight = 340
    object SheetTablo: TTabSheet
      Caption = #1058#1072#1073#1083#1086
      ImageIndex = 1
      ExplicitWidth = 613
      ExplicitHeight = 312
      object Grid: TStringGrid
        AlignWithMargins = True
        Left = 3
        Top = 3
        Width = 768
        Height = 405
        Align = alTop
        ColCount = 10
        DefaultColWidth = 80
        DefaultRowHeight = 80
        FixedCols = 0
        FixedRows = 0
        Options = [goFixedVertLine, goFixedHorzLine, goVertLine, goHorzLine]
        TabOrder = 0
        OnClick = GridClick
        OnDrawCell = GridDrawCell
        OnSelectCell = GridSelectCell
      end
      object Panel: TPanel
        AlignWithMargins = True
        Left = 3
        Top = 414
        Width = 768
        Height = 65
        Align = alBottom
        Caption = 'Panel'
        TabOrder = 1
        ExplicitTop = 244
        ExplicitWidth = 607
        object LabelNameT: TLabel
          Left = 8
          Top = 16
          Width = 58
          Height = 13
          Caption = 'LabelNameT'
        end
        object LabelSuma: TLabel
          Left = 471
          Top = 16
          Width = 64
          Height = 13
          Caption = #1057#1091#1084#1072' '#1086#1087#1083#1072#1090#1080
        end
        object LabelValue: TLabel
          AlignWithMargins = True
          Left = 560
          Top = 16
          Width = 51
          Height = 13
          Caption = 'LabelValue'
        end
        object BoxPriceT: TGroupBox
          AlignWithMargins = True
          Left = 72
          Top = 8
          Width = 153
          Height = 49
          Caption = #1062#1110#1085#1072
          TabOrder = 0
          object LabelGRNT: TLabel
            Left = 47
            Top = 20
            Width = 21
            Height = 13
            Caption = #1075#1088#1085'.'
          end
          object LabelKOPT: TLabel
            Left = 128
            Top = 20
            Width = 22
            Height = 13
            Caption = #1082#1086#1087'.'
          end
          object EditGRNT: TEdit
            AlignWithMargins = True
            Left = 3
            Top = 19
            Width = 38
            Height = 21
            ReadOnly = True
            TabOrder = 0
          end
          object EditKOPT: TEdit
            AlignWithMargins = True
            Left = 81
            Top = 20
            Width = 41
            Height = 21
            ReadOnly = True
            TabOrder = 1
          end
        end
        object BoxWeigh: TGroupBox
          AlignWithMargins = True
          Left = 240
          Top = 8
          Width = 170
          Height = 49
          Caption = #1042#1072#1075#1072
          TabOrder = 1
          object LabelGRNW: TLabel
            AlignWithMargins = True
            Left = 43
            Top = 17
            Width = 15
            Height = 13
            Caption = #1082#1075'.'
          end
          object LabelKOPTW: TLabel
            Left = 128
            Top = 20
            Width = 9
            Height = 13
            Caption = #1075'.'
          end
          object EditGRNW: TEdit
            Left = 3
            Top = 17
            Width = 34
            Height = 21
            MaxLength = 3
            TabOrder = 0
            OnKeyPress = EditGRNWKeyPress
          end
          object EditKOPTW: TEdit
            Left = 89
            Top = 17
            Width = 33
            Height = 21
            MaxLength = 3
            TabOrder = 1
            OnKeyPress = EditGRNWKeyPress
          end
        end
        object ButtonSuma: TButton
          Left = 416
          Top = 16
          Width = 41
          Height = 41
          Caption = '='
          TabOrder = 2
          OnClick = ButtonSumaClick
        end
      end
    end
    object SheetTools: TTabSheet
      Caption = #1053#1072#1083#1072#1096#1090#1091#1074#1072#1085#1085#1103
      ImageIndex = 1
      ExplicitWidth = 613
      ExplicitHeight = 312
      object GridPrice: TStringGrid
        AlignWithMargins = True
        Left = 3
        Top = 3
        Width = 310
        Height = 476
        Align = alLeft
        ColCount = 4
        TabOrder = 0
        OnClick = GridPriceClick
        ExplicitHeight = 306
        ColWidths = (
          64
          111
          64
          64)
      end
      object FileList: TFileListBox
        Left = 124
        Top = 200
        Width = 145
        Height = 97
        ItemHeight = 13
        Mask = '*.bmp'
        TabOrder = 1
        Visible = False
      end
      object BoxPrice: TGroupBox
        AlignWithMargins = True
        Left = 319
        Top = 3
        Width = 218
        Height = 476
        Align = alLeft
        Caption = #1042#1080#1079#1085#1072#1095#1077#1085#1085#1103' '#1094#1110#1085#1080
        TabOrder = 2
        ExplicitHeight = 306
        object LabelName: TLabel
          AlignWithMargins = True
          Left = 5
          Top = 18
          Width = 208
          Height = 23
          Align = alTop
          AutoSize = False
          Caption = 'LabelName'
        end
        object PanelPrice: TPanel
          AlignWithMargins = True
          Left = 3
          Top = 58
          Width = 208
          Height = 111
          TabOrder = 0
          object LabelGRN: TLabel
            Left = 56
            Top = 48
            Width = 21
            Height = 13
            Caption = #1075#1088#1085'.'
          end
          object LabelKOP: TLabel
            Left = 168
            Top = 50
            Width = 22
            Height = 13
            Caption = #1082#1086#1087'.'
          end
          object EditGRN: TEdit
            AlignWithMargins = True
            Left = 8
            Top = 40
            Width = 42
            Height = 21
            MaxLength = 3
            TabOrder = 0
            OnKeyPress = EditGRNWKeyPress
          end
          object EditKOP: TEdit
            Left = 120
            Top = 40
            Width = 42
            Height = 21
            MaxLength = 2
            TabOrder = 1
            OnKeyPress = EditGRNWKeyPress
          end
        end
        object ButPost: TButton
          AlignWithMargins = True
          Left = 56
          Top = 197
          Width = 105
          Height = 25
          Caption = #1047#1073#1077#1088#1077#1075#1090#1080
          TabOrder = 1
          OnClick = ButPostClick
        end
      end
    end
  end
end
