#pragma once
#include <list>
#include "Disciplina.h"

using namespace std;

class ListaDisciplinas
{
private:
public:
	ListaDisciplinas(int nd = 1000);
	~ListaDisciplinas();
	void incluaDisciplina(Disciplina* pdi);
	Disciplina* localizar(const char* n);
	list<Disciplina*> LDisciplinas;
	list<Disciplina*>::iterator IteradorLDisciplinas;
};