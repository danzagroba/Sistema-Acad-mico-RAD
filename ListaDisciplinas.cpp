#include "ListaDisciplinas.h"

ListaDisciplinas::ListaDisciplinas(int nd)
{
}
ListaDisciplinas::~ListaDisciplinas()
{
}
// inclui uma nova disciplina se houver espaco e a entrada for valida
void ListaDisciplinas::incluaDisciplina(Disciplina* pdi)
{
	LDisciplinas.push_back(pdi);
}

// localiza uma disciplina de nome "n" na lista de disciplinas
Disciplina* ListaDisciplinas::localizar(const char* n)
{
	list<Disciplina*>::iterator IteradorLDisciplinas = LDisciplinas.begin();
	while(IteradorLDisciplinas != LDisciplinas.end())
	{
		if((*(IteradorLDisciplinas))->getNome().compare(n) == 0)
		{
			return *(IteradorLDisciplinas);
		}
		++IteradorLDisciplinas;
    }
	return NULL;
}

std::list<Disciplina*>::iterator ListaDisciplinas::getBegin()
{
	return LDisciplinas.begin();
}
std::list<Disciplina*>::iterator ListaDisciplinas::getEnd()
{
	return LDisciplinas.end();
}
