//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "Unit3"
#pragma link "Unit2"
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
	Sistema = new Principal();
	Frame31->Sistema = Sistema;
	Frame21->Sistema = Sistema;
	this->Frame21->Visible=False;
	this->Frame31->Visible=False;
    this->Frame21->setListBox();
}

void __fastcall TForm1::Universidade1Click(TObject *Sender)
{
	tirarVisible();
	this->Frame31->Visible=True;
	this->Frame31->Enabled=True;
	this->Frame31->setCadastro(0);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Departamento1Click(TObject *Sender)
{
	tirarVisible();
	this->Frame31->Visible=True;
	this->Frame31->Enabled=True;
	this->Frame31->setCadastro(1);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Departamento2Click(TObject *Sender)
{
	tirarVisible();
	this->Frame31->Visible=True;
	this->Frame31->Enabled=True;
	this->Frame31->setCadastro(2);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Universidade2Click(TObject *Sender)
{
	tirarVisible();
	this->Frame31->Visible=True;
	this->Frame31->Enabled=True;
	this->Frame31->setCadastro(3);
}

void TForm1::tirarVisible()
{
	this->Frame21->Visible=False;
	this->Frame31->Visible=False;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Listar2Click(TObject *Sender)
{
	tirarVisible();
	this->Frame21->Visible=True;
	this->Frame21->setList(0);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Departamento3Click(TObject *Sender)
{
    tirarVisible();
	this->Frame21->Visible=True;
	this->Frame21->setList(1);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Departamento4Click(TObject *Sender)
{
	tirarVisible();
	this->Frame21->Visible=True;
	this->Frame21->setList(2);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Professor2Click(TObject *Sender)
{
	tirarVisible();
	this->Frame21->Visible=True;
	this->Frame21->setList(3);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::udo1Click(TObject *Sender)
{
    tirarVisible();
	this->Frame21->Visible=True;
	this->Frame21->setList(4);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Salvar2Click(TObject *Sender)
{
	this->Sistema->GravarTudo();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Universidades1Click(TObject *Sender)
{
	this->Sistema->GravarUniversidades();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Universidades2Click(TObject *Sender)
{
	this->Sistema->GravarDepartamentos();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Disciplinas1Click(TObject *Sender)
{
	this->Sistema->GravarDisciplinas();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Disciplinas2Click(TObject *Sender)
{
	this->Sistema->GravarAlunos();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Recuperar2Click(TObject *Sender)
{
	this->Sistema->RecuperarTudo();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Universidades3Click(TObject *Sender)
{
	this->Sistema->RecuperarUniversidades();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Universidades4Click(TObject *Sender)
{
	this->Sistema->RecuperarDepartamentos();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Disciplinas3Click(TObject *Sender)
{
	this->Sistema->RecuperarDisciplinas();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Disciplinas4Click(TObject *Sender)
{
	this->Sistema->RecuperarAlunos();
}
//---------------------------------------------------------------------------

