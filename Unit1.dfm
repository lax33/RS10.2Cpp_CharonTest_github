object Form2: TForm2
  Left = 0
  Top = 0
  Caption = 'Form2'
  ClientHeight = 330
  ClientWidth = 565
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -13
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 16
  object Label1: TLabel
    Left = 8
    Top = 153
    Width = 93
    Height = 16
    Caption = ' '#1054#1090#1074#1077#1090' Charon -'
  end
  object Label2: TLabel
    Left = 8
    Top = 175
    Width = 146
    Height = 16
    Caption = #1044#1083#1080#1085#1072' '#1082#1086#1084#1072#1085#1076#1099' ('#1073#1072#1081#1090') - '
  end
  object Label3: TLabel
    Left = 160
    Top = 175
    Width = 37
    Height = 16
    Caption = 'Label3'
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
  end
  object Label4: TLabel
    Left = 8
    Top = 23
    Width = 53
    Height = 16
    Caption = 'IP adress'
  end
  object Label5: TLabel
    Left = 8
    Top = 59
    Width = 23
    Height = 16
    Caption = 'Port'
  end
  object Label6: TLabel
    Left = 189
    Top = 23
    Width = 76
    Height = 16
    Caption = 'ReadTimeout'
  end
  object Label7: TLabel
    Left = 171
    Top = 59
    Width = 93
    Height = 16
    Caption = 'ConnectTimeout'
  end
  object Label8: TLabel
    Left = 283
    Top = 245
    Width = 147
    Height = 16
    Caption = #1054#1073#1097'. '#1082#1086#1083#1080#1095#1077#1089#1090#1074#1086' '#1094#1080#1082#1083#1086#1074
  end
  object Label9: TLabel
    Left = 388
    Top = 270
    Width = 42
    Height = 16
    Caption = #1059#1076#1072#1095#1085#1086
  end
  object Label10: TLabel
    Left = 374
    Top = 300
    Width = 56
    Height = 16
    Caption = #1053#1077#1091#1076#1072#1095#1085#1086
  end
  object Label11: TLabel
    Left = 283
    Top = 210
    Width = 192
    Height = 16
    Caption = #1055#1072#1091#1079#1072' '#1084#1077#1078#1076#1091' '#1089#1086#1077#1076#1080#1085#1077#1085#1080#1103#1084#1080' ('#1084#1089')'
  end
  object Label13: TLabel
    Left = 107
    Top = 152
    Width = 12
    Height = 16
    Caption = '   '
  end
  object Label12: TLabel
    Left = 189
    Top = 115
    Width = 44
    Height = 16
    Caption = 'Label12'
  end
  object RadioButton1: TRadioButton
    Left = 360
    Top = 8
    Width = 169
    Height = 17
    Caption = 'otau_get_count_channels'
    TabOrder = 0
    OnClick = RadioButton1Click
  end
  object Edit2: TEdit
    Left = 67
    Top = 20
    Width = 90
    Height = 24
    TabOrder = 1
    Text = '172.16.4.68'
  end
  object Edit3: TEdit
    Left = 67
    Top = 56
    Width = 90
    Height = 24
    TabOrder = 2
    Text = '11835'
  end
  object Button1: TButton
    Left = 95
    Top = 112
    Width = 75
    Height = 25
    Caption = 'Connect'
    TabOrder = 3
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 8
    Top = 112
    Width = 75
    Height = 25
    Caption = 'Clean'
    TabOrder = 4
    OnClick = Button2Click
  end
  object Edit4: TEdit
    Left = 277
    Top = 20
    Width = 49
    Height = 24
    TabOrder = 5
    Text = '5000'
  end
  object Edit5: TEdit
    Left = 277
    Top = 56
    Width = 49
    Height = 24
    TabOrder = 6
    Text = '5000'
  end
  object RadioButton2: TRadioButton
    Left = 360
    Top = 31
    Width = 113
    Height = 17
    Caption = 'get_rtu_number'
    TabOrder = 7
    OnClick = RadioButton2Click
  end
  object RadioButton3: TRadioButton
    Left = 360
    Top = 54
    Width = 137
    Height = 17
    Caption = 'otau_set_channel 3'
    TabOrder = 8
    OnClick = RadioButton3Click
  end
  object Button3: TButton
    Left = 374
    Top = 169
    Width = 75
    Height = 25
    Caption = 'Start'
    TabOrder = 9
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 482
    Top = 169
    Width = 75
    Height = 25
    Caption = 'Stop'
    TabOrder = 10
    OnClick = Button4Click
  end
  object Edit6: TEdit
    Left = 436
    Top = 237
    Width = 121
    Height = 24
    TabOrder = 11
  end
  object Edit7: TEdit
    Left = 436
    Top = 267
    Width = 121
    Height = 24
    TabOrder = 12
    Text = '0'
  end
  object Edit8: TEdit
    Left = 436
    Top = 297
    Width = 121
    Height = 24
    TabOrder = 13
    Text = '0'
  end
  object RadioButton4: TRadioButton
    Left = 360
    Top = 77
    Width = 137
    Height = 17
    Caption = 'otau_get_channel'
    TabOrder = 14
    OnClick = RadioButton4Click
  end
  object Edit9: TEdit
    Left = 500
    Top = 207
    Width = 57
    Height = 24
    TabOrder = 15
    Text = '500'
  end
  object RadioButton5: TRadioButton
    Left = 360
    Top = 100
    Width = 113
    Height = 17
    TabOrder = 16
    OnClick = RadioButton5Click
  end
  object Edit10: TEdit
    Left = 376
    Top = 96
    Width = 121
    Height = 24
    Font.Charset = ANSI_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Tahoma'
    Font.Style = []
    ParentFont = False
    TabOrder = 17
    Text = 'ini_read'
  end
  object IdTCPClient1: TIdTCPClient
    ConnectTimeout = 0
    IPVersion = Id_IPv4
    Port = 0
    ReadTimeout = -1
    Left = 24
    Top = 280
  end
  object IdAntiFreeze1: TIdAntiFreeze
    Left = 80
    Top = 280
  end
end
