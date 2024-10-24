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
