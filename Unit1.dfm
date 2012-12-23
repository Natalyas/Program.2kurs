object Form1: TForm1
  Left = 393
  Top = 150
  Width = 726
  Height = 603
  Caption = #1050#1086#1076' '#1061#1077#1084#1084#1080#1085#1075#1072' '#1074' '#1084#1072#1090#1088#1080#1095#1085#1086#1081'  '#1092#1086#1088#1084#1077
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 8
    Top = 24
    Width = 102
    Height = 13
    Caption = #1057#1083#1086#1074#1086' '#1076#1083#1103' '#1087#1077#1088#1077#1076#1072#1095#1080
  end
  object Label2: TLabel
    Left = 8
    Top = 56
    Width = 48
    Height = 13
    Caption = #1048#1085#1092'. '#1073#1080#1090':'
  end
  object Label3: TLabel
    Left = 8
    Top = 88
    Width = 118
    Height = 13
    Caption = #1047#1072#1082#1086#1076#1080#1088#1086#1074#1072#1085#1085#1086#1077' '#1089#1083#1086#1074#1086
  end
  object Label4: TLabel
    Left = 400
    Top = 16
    Width = 96
    Height = 13
    Caption = #1055#1086#1083#1091#1095#1077#1085#1085#1086#1077' '#1089#1083#1086#1074#1086':'
  end
  object Label5: TLabel
    Left = 360
    Top = 128
    Width = 120
    Height = 13
    Caption = #1044#1077#1082#1086#1076#1080#1088#1086#1074#1072#1085#1085#1086#1077' '#1089#1083#1086#1074#1086
  end
  object Label6: TLabel
    Left = 480
    Top = 64
    Width = 100
    Height = 13
    Caption = #8470' '#1086#1096#1080#1073#1086#1095#1085#1086#1075#1086' '#1073#1080#1090#1072
  end
  object Label7: TLabel
    Left = 416
    Top = 96
    Width = 45
    Height = 13
    Caption = #1057#1080#1085#1076#1088#1086#1084
  end
  object Label8: TLabel
    Left = 568
    Top = 96
    Width = 13
    Height = 13
    Caption = 'S0'
  end
  object Label9: TLabel
    Left = 8
    Top = 112
    Width = 111
    Height = 13
    Caption = #1064#1072#1073#1083#1086#1085' '#1082#1086#1076'.'#1088#1072#1079#1088#1103#1076#1086#1074
  end
  object Label10: TLabel
    Left = 144
    Top = 56
    Width = 65
    Height = 13
    Caption = #1050#1086#1085#1090#1088#1086#1083'. '#1073#1080#1090
  end
  object Label11: TLabel
    Left = 360
    Top = 352
    Width = 88
    Height = 13
    Caption = #1056#1072#1089#1095#1105#1090' '#1089#1080#1085#1076#1088#1086#1084#1072
  end
  object Label12: TLabel
    Left = 16
    Top = 352
    Width = 124
    Height = 13
    Caption = #1056#1072#1089#1095#1105#1090' '#1082#1086#1085#1090#1088#1086#1083#1100#1085#1099#1093' '#1073#1080#1090
  end
  object Edit1: TEdit
    Left = 120
    Top = 16
    Width = 129
    Height = 21
    Color = clWhite
    TabOrder = 0
    Text = '111'
    OnChange = Edit1Change
  end
  object Edit2: TEdit
    Left = 64
    Top = 48
    Width = 49
    Height = 21
    TabOrder = 1
    Text = '3'
  end
  object StringGrid1: TStringGrid
    Left = 360
    Top = 160
    Width = 337
    Height = 185
    DefaultColWidth = 28
    DefaultRowHeight = 20
    FixedCols = 0
    TabOrder = 2
  end
  object deb: TEdit
    Left = 136
    Top = 104
    Width = 201
    Height = 21
    TabOrder = 3
  end
  object Button1: TButton
    Left = 256
    Top = 16
    Width = 97
    Height = 25
    Caption = #1047#1072#1082#1086#1076#1080#1088#1086#1074#1072#1090#1100
    TabOrder = 4
    OnClick = Button1Click
  end
  object Edit3: TEdit
    Left = 136
    Top = 80
    Width = 201
    Height = 21
    TabOrder = 5
  end
  object RadioGroup1: TRadioGroup
    Left = 8
    Top = 152
    Width = 337
    Height = 193
    Caption = #1042#1085#1077#1089#1077#1085#1080#1077' '#1086#1096#1080#1073#1082#1080
    ItemIndex = 0
    Items.Strings = (
      #1057#1076#1077#1083#1072#1090#1100' '#1086#1096#1080#1073#1082#1091' '#1074' '#1074#1099#1073#1088#1072#1085#1085#1086#1084' '#1088#1072#1079#1088#1103#1076#1077
      #1057#1076#1077#1083#1072#1090#1100' '#1086#1096#1080#1073#1082#1080' '#1074' '#1074#1099#1073#1088#1072#1085#1085#1099#1093' '#1088#1072#1079#1088#1103#1076#1072#1093
      #1057#1076#1077#1083#1072#1090#1100' 1 '#1086#1096#1080#1073#1082#1091' '#1074' '#1089#1083#1091#1095#1072#1081#1085#1086#1084' '#1088#1072#1079#1088#1103#1076#1077
      #1057#1076#1077#1083#1072#1090#1100' 2 '#1086#1096#1080#1073#1082#1080' '#1074' '#1089#1083#1091#1095#1072#1081#1085#1099#1093' '#1088#1072#1079#1088#1103#1076#1072#1093
      #1053#1077' '#1076#1077#1083#1072#1090#1100' '#1086#1096#1080#1073#1082#1080)
    TabOrder = 6
    OnClick = RadioGroup1Click
  end
  object Edit4: TEdit
    Left = 248
    Top = 208
    Width = 25
    Height = 21
    TabOrder = 7
    Text = '0'
  end
  object Edit5: TEdit
    Left = 296
    Top = 208
    Width = 25
    Height = 21
    TabOrder = 8
    Text = '0'
  end
  object UpDown2: TUpDown
    Left = 273
    Top = 208
    Width = 16
    Height = 21
    Associate = Edit4
    Min = 0
    Position = 0
    TabOrder = 9
    Wrap = False
    OnChanging = UpDown4Changing
    OnClick = UpDown4Click
  end
  object UpDown3: TUpDown
    Left = 321
    Top = 208
    Width = 16
    Height = 21
    Associate = Edit5
    Min = 0
    Position = 0
    TabOrder = 10
    Wrap = False
    OnChanging = UpDown4Changing
    OnClick = UpDown4Click
  end
  object UpDown4: TUpDown
    Left = 273
    Top = 168
    Width = 16
    Height = 21
    Associate = Edit6
    Min = 0
    Position = 0
    TabOrder = 11
    Wrap = False
    OnChanging = UpDown4Changing
    OnClick = UpDown4Click
  end
  object Edit6: TEdit
    Left = 248
    Top = 168
    Width = 25
    Height = 21
    TabOrder = 12
    Text = '0'
  end
  object Edit7: TEdit
    Left = 504
    Top = 8
    Width = 185
    Height = 21
    TabOrder = 13
  end
  object Button2: TButton
    Left = 376
    Top = 48
    Width = 89
    Height = 25
    Caption = #1044#1077#1082#1086#1076#1080#1088#1086#1074#1072#1090#1100
    TabOrder = 14
    OnClick = Button2Click
  end
  object Edit8: TEdit
    Left = 496
    Top = 120
    Width = 201
    Height = 21
    TabOrder = 15
  end
  object Edit9: TEdit
    Left = 592
    Top = 56
    Width = 41
    Height = 21
    TabOrder = 16
  end
  object Edit11: TEdit
    Left = 480
    Top = 88
    Width = 65
    Height = 21
    TabOrder = 17
  end
  object Edit12: TEdit
    Left = 592
    Top = 88
    Width = 41
    Height = 21
    TabOrder = 18
  end
  object Memo1: TMemo
    Left = 360
    Top = 376
    Width = 337
    Height = 177
    TabOrder = 19
  end
  object Edit10: TEdit
    Left = 216
    Top = 48
    Width = 41
    Height = 21
    TabOrder = 20
  end
  object Memo2: TMemo
    Left = 16
    Top = 376
    Width = 337
    Height = 177
    TabOrder = 21
  end
end
