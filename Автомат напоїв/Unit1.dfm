object FormMain: TFormMain
  Left = 0
  Top = 0
  Caption = 'FormMain'
  ClientHeight = 450
  ClientWidth = 307
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object LabelMessage: TLabel
    AlignWithMargins = True
    Left = 19
    Top = 264
    Width = 253
    Height = 13
  end
  object LabelPrice: TLabel
    Left = 8
    Top = 283
    Width = 49
    Height = 46
  end
  object PanelChoce: TPanel
    AlignWithMargins = True
    Left = 0
    Top = 8
    Width = 290
    Height = 250
    AutoSize = True
    TabOrder = 0
    object But1: TBitBtn
      AlignWithMargins = True
      Left = 4
      Top = 4
      Width = 282
      Height = 25
      Align = alTop
      Caption = #1050#1072#1074#1072' '#1077#1089#1087#1088#1077#1089#1086' - 10 '#1075#1088#1085'.'
      TabOrder = 0
      ExplicitLeft = 72
      ExplicitTop = 16
      ExplicitWidth = 75
    end
    object But2: TBitBtn
      AlignWithMargins = True
      Left = 4
      Top = 35
      Width = 282
      Height = 25
      Align = alTop
      Caption = #1050#1072#1074#1072' '#1072#1084#1077#1088#1110#1082#1072#1085#1086' - 8 '#1075#1088#1085'.'
      TabOrder = 1
      ExplicitLeft = 88
      ExplicitWidth = 75
    end
    object But3: TBitBtn
      AlignWithMargins = True
      Left = 4
      Top = 66
      Width = 282
      Height = 25
      Align = alTop
      Caption = #1050#1072#1087#1091#1095#1110#1085#1086' '#1075#1086#1088#1110#1093#1086#1074#1077' - 10 '#1075#1088#1085'.'
      TabOrder = 2
      ExplicitLeft = 88
      ExplicitTop = 64
      ExplicitWidth = 75
    end
    object But4: TBitBtn
      AlignWithMargins = True
      Left = 4
      Top = 97
      Width = 282
      Height = 25
      Align = alTop
      Caption = #1050#1072#1087#1091#1095#1110#1085#1086' '#1089#1084#1077#1090#1072#1085#1082#1086#1074#1077' - 10 '#1075#1088#1085'.'
      TabOrder = 3
      ExplicitLeft = 88
      ExplicitTop = 95
      ExplicitWidth = 75
    end
    object But5: TBitBtn
      AlignWithMargins = True
      Left = 4
      Top = 128
      Width = 282
      Height = 25
      Align = alTop
      Caption = #1043#1072#1088#1103#1095#1080#1081' '#1096#1086#1082#1086#1083#1072#1076' - 15 '#1075#1088#1085'.'
      TabOrder = 4
      ExplicitLeft = 88
      ExplicitTop = 121
      ExplicitWidth = 75
    end
    object But6: TBitBtn
      AlignWithMargins = True
      Left = 4
      Top = 159
      Width = 282
      Height = 25
      Align = alTop
      Caption = #1063#1072#1081' '#1095#1086#1088#1085#1080#1081' - 5 '#1075#1088#1085'.'
      TabOrder = 5
      ExplicitLeft = 88
      ExplicitTop = 152
      ExplicitWidth = 75
    end
    object But7: TBitBtn
      AlignWithMargins = True
      Left = 4
      Top = 190
      Width = 282
      Height = 25
      Align = alTop
      Caption = #1063#1072#1081' '#1079#1077#1083#1077#1085#1080#1081' - 7 '#1075#1088#1085'.'
      TabOrder = 6
      ExplicitLeft = 88
      ExplicitTop = 183
      ExplicitWidth = 75
    end
    object But8: TBitBtn
      AlignWithMargins = True
      Left = 4
      Top = 221
      Width = 282
      Height = 25
      Align = alTop
      Caption = #1063#1072#1081' '#1079' '#1075#1110#1088#1089#1100#1082#1080#1093' '#1090#1088#1072#1074' - 10 '#1075#1088#1085'.'
      TabOrder = 7
      ExplicitLeft = 88
      ExplicitTop = 214
      ExplicitWidth = 75
    end
  end
  object PanelMoney: TPanel
    AlignWithMargins = True
    Left = 8
    Top = 344
    Width = 137
    Height = 98
    TabOrder = 1
    object Im1: TImage
      Left = 0
      Top = 16
      Width = 33
      Height = 73
    end
    object Im2: TImage
      Left = 48
      Top = 16
      Width = 33
      Height = 73
    end
    object Im5: TImage
      Left = 96
      Top = 16
      Width = 31
      Height = 73
    end
  end
  object Panel: TPanel
    AlignWithMargins = True
    Left = 80
    Top = 283
    Width = 105
    Height = 55
    TabOrder = 2
  end
  object PanelCap: TPanel
    AlignWithMargins = True
    Left = 151
    Top = 344
    Width = 148
    Height = 98
    TabOrder = 3
    object ImageCap: TImage
      AlignWithMargins = True
      Left = 32
      Top = 8
      Width = 65
      Height = 57
    end
    object Button1: TButton
      AlignWithMargins = True
      Left = 4
      Top = 69
      Width = 140
      Height = 25
      Align = alBottom
      Caption = #1057#1082#1072#1089#1091#1074#1072#1085#1085#1103' '#1079#1072#1084#1086#1074#1083#1077#1085#1085#1103
      TabOrder = 0
      ExplicitLeft = 0
      ExplicitWidth = 124
    end
  end
  object Timer: TTimer
    Left = 224
    Top = 296
  end
end
