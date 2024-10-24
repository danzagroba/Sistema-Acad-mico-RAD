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
	IteradorLDisciplinas = LDisciplinas.begin();
	while(((*(IteradorLDisciplinas))->getNome().compare(n))){
		IteradorLDisciplinas++;
	}
	return (*(IteradorLDisciplinas));
}
