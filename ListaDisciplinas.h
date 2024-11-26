#pragma once
#include <list>
#include "Disciplina.h"

using namespace std;

class ListaDisciplinas
{
private:
	list<Disciplina*> LDisciplinas;
public:
	ListaDisciplinas(int nd = 1000);
	~ListaDisciplinas();
	void incluaDisciplina(Disciplina* pdi);
	Disciplina* localizar(const char* n);
	std::list<Disciplina*>::iterator getBegin();
	std::list<Disciplina*>::iterator getEnd();
};