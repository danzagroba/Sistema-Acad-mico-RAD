#include "ListaUniversidades.h"

ListaUniversidades::ListaUniversidades(int nd)
{
}
ListaUniversidades::~ListaUniversidades()
{

}
// inclui uma nova universidade se houver espaco e a entrada for valida
void ListaUniversidades::incluaUniversidade(Universidade* pdi)
{
	LUniversidades.push_back(pdi);
}

Universidade* ListaUniversidades::localizar(const char* univ)
{
	IteradorLUniversidades = LUniversidades.begin();
	while(((*(IteradorLUniversidades))->getNome().compare(univ))){
		IteradorLUniversidades++;
	}
	return (*(IteradorLUniversidades));
}
