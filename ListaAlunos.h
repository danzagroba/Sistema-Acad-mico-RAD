#pragma once
#include "Aluno.h"
#include <list>

class ListaAlunos
{
private:
    std::list<Aluno*> LAlunos;
public:
	ListaAlunos(int na = 45);
	~ListaAlunos();
	void incluaAluno(Aluno* pa);
	Aluno* localizar(int RA);
	std::list<Aluno*>::iterator getBegin();
	std::list<Aluno*>::iterator getEnd();
};