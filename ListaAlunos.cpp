#include "ListaAlunos.h"

ListaAlunos::ListaAlunos(int na)
{

}
ListaAlunos::~ListaAlunos()
{
}
// inclui um novo aluno se houver espaco e a entrada for valida
void ListaAlunos::incluaAluno(Aluno* pa)
{
	LAlunos.push_back(pa);
}

Aluno* ListaAlunos::localizar(int RA)
{
	std::list<Aluno*>::iterator IteradorLAlunos = LAlunos.begin();
	while(IteradorLAlunos != LAlunos.end())
	{
		if((*(IteradorLAlunos))->getRA() == RA)
		{
			return *(IteradorLAlunos);
		}
		++IteradorLAlunos;
	}
	return NULL;
}
std::list<Aluno*>::iterator ListaAlunos::getBegin()
{
	return LAlunos.begin();
}
std::list<Aluno*>::iterator ListaAlunos::getEnd()
{
	return LAlunos.end();
}
