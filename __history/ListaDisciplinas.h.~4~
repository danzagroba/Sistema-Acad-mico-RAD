#pragma once
#include "ElDisciplina.h"
#include "Disciplina.h"
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>

class ListaDisciplinas
{
private:
	int cont_disc;
	int numero_disc;
	ElDisciplina *pElDisciplinaPrim;
	ElDisciplina *pElDisciplinaAtual;
public:
	ListaDisciplinas(int nd = 1000);
	~ListaDisciplinas();
	void incluaDisciplina(Disciplina* pdi);
	void listeDisciplinas();
	Disciplina* localizar(const char* n);
	ElDisciplina* getDisciplinaPrim();
    TListBox* ListBox1;
};