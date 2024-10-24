object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Form1'
  ClientHeight = 366
  ClientWidth = 668
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = Menu
  OldCreateOrder = False
  PixelsPerInch = 96
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
      object Universidades1: TMenuItem
        Caption = 'Universidades'
        OnClick = Universidades1Click
      end
      object Universidades2: TMenuItem
        Caption = 'Departamentos'
        OnClick = Universidades2Click
      end
      object Disciplinas1: TMenuItem
        Caption = 'Disciplinas'
        OnClick = Disciplinas1Click
      end
      object Disciplinas2: TMenuItem
        Caption = 'Alunos'
        OnClick = Disciplinas2Click
      end
    end
    object Recuperar1: TMenuItem
      Caption = 'Recuperar'
      object Recuperar2: TMenuItem
        Caption = 'Tudo'
        OnClick = Recuperar2Click
      end
      object Universidades3: TMenuItem
        Caption = 'Universidades'
        OnClick = Universidades3Click
      end
      object Universidades4: TMenuItem
        Caption = 'Departamentos'
        OnClick = Universidades4Click
      end
      object Disciplinas3: TMenuItem
        Caption = 'Disciplinas'
        OnClick = Disciplinas3Click
      end
      object Disciplinas4: TMenuItem
        Caption = 'Alunos'
        OnClick = Disciplinas4Click
      end
    end
  end
end
