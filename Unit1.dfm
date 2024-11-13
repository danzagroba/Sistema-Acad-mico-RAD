object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 391
  ClientWidth = 668
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = Menu
  TextHeight = 13
  inline Frame31: TFrame3
    Left = 8
    Top = 8
    Width = 640
    Height = 287
    Enabled = False
    TabOrder = 0
    Visible = False
    ExplicitLeft = 8
    ExplicitTop = 8
    ExplicitHeight = 287
    inherited Label1: TLabel
      Height = 13
      StyleElements = [seFont, seClient, seBorder]
      ExplicitHeight = 13
    end
    inherited Label2: TLabel
      Height = 13
      StyleElements = [seFont, seClient, seBorder]
      ExplicitHeight = 13
    end
    inherited Label3: TLabel
      StyleElements = [seFont, seClient, seBorder]
    end
    inherited Edit1: TEdit
      Height = 21
      StyleElements = [seFont, seClient, seBorder]
      ExplicitHeight = 21
    end
    inherited Edit2: TEdit
      Height = 21
      StyleElements = [seFont, seClient, seBorder]
      ExplicitHeight = 21
    end
    inherited Edit3: TEdit
      Height = 21
      StyleElements = [seFont, seClient, seBorder]
      ExplicitHeight = 21
    end
  end
  inline Frame21: TFrame2
    Left = -2
    Top = 0
    Width = 659
    Height = 353
    TabOrder = 1
    ExplicitLeft = -2
    ExplicitWidth = 659
    ExplicitHeight = 353
    inherited Label1: TLabel
      Width = 31
      Height = 13
      StyleElements = [seFont, seClient, seBorder]
      ExplicitWidth = 31
      ExplicitHeight = 13
    end
    inherited ListBox1: TListBox
      StyleElements = [seFont, seClient, seBorder]
    end
    inherited ListBox2: TListBox
      ItemHeight = 13
      StyleElements = [seFont, seClient, seBorder]
    end
  end
  object Menu: TMainMenu
    Left = 528
    Top = 16
    object Cadastrar1: TMenuItem
      Caption = 'Cadastrar'
      object Universidade1: TMenuItem
        Caption = 'Universidade'
        OnClick = Universidade1Click
      end
      object Departamento1: TMenuItem
        Caption = 'Departamento'
        OnClick = Departamento1Click
      end
      object Departamento2: TMenuItem
        Caption = 'Disciplina'
        OnClick = Departamento2Click
      end
      object Universidade2: TMenuItem
        Caption = 'Aluno'
        OnClick = Universidade2Click
      end
    end
    object Listar1: TMenuItem
      Caption = 'Listar'
      object udo1: TMenuItem
        Caption = 'Tudo'
        OnClick = udo1Click
      end
      object Listar2: TMenuItem
        Caption = 'Universidade'
        OnClick = Listar2Click
      end
      object Departamento3: TMenuItem
        Caption = 'Departamento'
        OnClick = Departamento3Click
      end
      object Departamento4: TMenuItem
        Caption = 'Disciplina'
        OnClick = Departamento4Click
      end
      object Professor2: TMenuItem
        Caption = 'Aluno'
        OnClick = Professor2Click
      end
    end
    object Salvar1: TMenuItem
      Caption = 'Salvar'
      object Salvar2: TMenuItem
        Caption = 'Tudo'
        OnClick = Salvar2Click
      end
    end
    object Recuperar1: TMenuItem
      Caption = 'Recuperar'
      object Recuperar2: TMenuItem
        Caption = 'Tudo'
        OnClick = Recuperar2Click
      end
    end
  end
end
