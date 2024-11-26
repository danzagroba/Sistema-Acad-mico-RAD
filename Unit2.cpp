//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <typeinfo>

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFrame2 *Frame2;
//---------------------------------------------------------------------------
__fastcall TFrame2::TFrame2(TComponent* Owner)
	: TFrame(Owner)
{
}
//---------------------------------------------------------------------------

void TFrame2::setList(int type)
{
	VDepartamentos.clear();
    VDisciplinas.clear();
    this->type=type;
	ListBox2->Visible=true;
    this->ListBox2->Clear();
	this->ListBox1->Clear();
	switch (type) {
	case 0:
		this->Label1->Caption="Universidade";
		listaUniv();
		break;
	case 1:
		this->Label1->Caption="Departamento";
		listaDept();
		break;
	case 2:
		this->Label1->Caption="Disciplina";
		listaDisc();
		break;
	case 3:
		ListBox2->Visible=false;
		this->Label1->Caption="Aluno";
        listaAlun();
		break;
	case 4:
		ListBox2->Visible=false;
		this->Label1->Caption="Tudo";
        listaTudo();
		break;
	default:
		;
	}

}

void TFrame2::listaTudo()
{
	 listaUniv();
	 listaDept();
	 listaDisc();
     listaAlun();
}

void TFrame2::listaUniv(){

	std::list<Universidade*>::iterator IteradorLUniversidades = Sistema->LUniversidades.getBegin();
	while (IteradorLUniversidades!= Sistema->LUniversidades.getEnd())
	{
		string aux;
		aux = (*IteradorLUniversidades)->getNome();
		AnsiString NomeUniv;
		NomeUniv = aux.data();

		ListBox1->Items->Add(NomeUniv);
		IteradorLUniversidades++;
	}
}

void TFrame2::listaDept(){
	std::list<Departamento*>::iterator IteradorLDepartamentos = Sistema->LDepartamentos.getBegin();
	while (IteradorLDepartamentos!= Sistema->LDepartamentos.getEnd())
	{
		string aux;
		VDepartamentos.push_back((*(IteradorLDepartamentos))->getNome());
		aux = (*(IteradorLDepartamentos))->getNome() + std::string(" da ") + (*(IteradorLDepartamentos))->getUniversidade()->getNome();
		AnsiString NomeDept;
		NomeDept = aux.data();

		ListBox1->Items->Add(NomeDept);
		IteradorLDepartamentos++;
	}
}

void TFrame2::listaDisc(){
	list<Disciplina*>::iterator IteradorLDisciplinas = Sistema->LDisciplinas.getBegin();

	while (IteradorLDisciplinas != Sistema->LDisciplinas.getEnd())
	{
		string aux;
		VDisciplinas.push_back((*(IteradorLDisciplinas))->getNome());
		aux = (*(IteradorLDisciplinas))->getNome() + std::string(" do Departamento ") + (*(IteradorLDisciplinas))->getDepartamento()->getNome();
		AnsiString NomeDisc;
		NomeDisc = aux.data();

		ListBox1->Items->Add(NomeDisc);
		IteradorLDisciplinas++;
	}
}

void TFrame2::listaAlun(){
	std::list<Aluno*>::iterator IteradorLAlunos = Sistema->LAlunos.getBegin();

	while (IteradorLAlunos!= Sistema->LAlunos.getEnd())
	{
		string aux;
		aux = (*(IteradorLAlunos))->getNome();
		AnsiString NomeAluno;
		NomeAluno = aux.data();

		ListBox1->Items->Add(NomeAluno);
		IteradorLAlunos++;
	}
}


void __fastcall TFrame2::ListBox1Click(TObject *Sender)
{
	this->ListBox2->Clear();
	switch (this->type) {
	case 0:
		listaUnivDept();
		break;
	case 1:
		listaDeptDisc();
		break;
	case 2:
		listaDiscAlun();
		break;
	default:
		break;
	}



}
//---------------------------------------------------------------------------


void TFrame2::listaUnivDept(){
	AnsiString NomeUniv;
	int pos = ListBox1->ItemIndex;
	NomeUniv = ListBox1->Items->operator [](pos);

	Universidade* pUniv = NULL;

	std::list<Universidade*>::iterator IteradorLUniversidades = Sistema->LUniversidades.getBegin();

	while (IteradorLUniversidades!= Sistema->LUniversidades.getEnd())
	{
		string aux;
		aux = (*IteradorLUniversidades)->getNome();

		AnsiString NomeAux = aux.data();
		if ( NomeUniv == NomeAux )
		{
			pUniv = *(IteradorLUniversidades);
			break;
		}

		IteradorLUniversidades++;
	}

	if (pUniv)
	{
		int tam = (int)	pUniv->ObjLDepartamentos.size();
		for (int i = 0; i < tam; i++)
		{
			Departamento* pDepart = NULL;
			pDepart = pUniv->ObjLDepartamentos[i];
			const string aux = pDepart->getNome();

			AnsiString NomeAux = aux.data();
			ListBox2->Items->Add( NomeAux );
		}
	}
}

void TFrame2::listaDeptDisc(){
	string NomeDept;
	int pos = ListBox1->ItemIndex;
	NomeDept = VDepartamentos[pos];
	Departamento* pDept = NULL;

	std::list<Departamento*>::iterator IteradorLDepartamentos = Sistema->LDepartamentos.getBegin();

	while (IteradorLDepartamentos!= Sistema->LDepartamentos.getEnd())
	{
		string aux;
		aux = (*(IteradorLDepartamentos))->getNome();

		if ( NomeDept == aux )
		{
			pDept = *(IteradorLDepartamentos);
			break;
		}

		IteradorLDepartamentos++;
	}

	if (pDept)
	{
		int tam = (int)	pDept->pObjLDisciplinas.size();
		for (int i = 0; i < tam; i++)
		{
			Disciplina* pDisc = NULL;
			pDisc = pDept->pObjLDisciplinas[i];
			const string aux = pDisc->getNome();

			AnsiString NomeAux = aux.data();
			ListBox2->Items->Add( NomeAux );
		}
	}
}

void TFrame2::listaDiscAlun(){
	string NomeDisc;
	int pos = ListBox1->ItemIndex;
	NomeDisc = VDisciplinas[pos];

	Disciplina* pDisc = NULL;

	list<Disciplina*>::iterator IteradorLDisciplinas = Sistema->LDisciplinas.getBegin();

	while (IteradorLDisciplinas!= Sistema->LDisciplinas.getEnd())
	{
		string aux;
		aux = (*(IteradorLDisciplinas))->getNome();

		if ( NomeDisc == aux )
		{
			pDisc = *(IteradorLDisciplinas);
			break;
		}

		IteradorLDisciplinas++;
	}

	if (pDisc)
	{
		int tam = (int)	pDisc->ObjLAlunos.size();
		for (int i = 0; i < tam; i++)
		{
			Aluno* pAlun = NULL;
			pAlun = pDisc->ObjLAlunos[i];
			const string aux = pAlun->getNome();

			AnsiString NomeAux = aux.data();
			ListBox2->Items->Add( NomeAux );
		}
	}
}
