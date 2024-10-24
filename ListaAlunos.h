#pragma once
#include "Aluno.h"
#include <list>

class ListaAlunos
{
private:
public:
	ListaAlunos(int na = 45);
	~ListaAlunos();
	void incluaAluno(Aluno* pa);
	std::list<Aluno*> LAlunos;
};