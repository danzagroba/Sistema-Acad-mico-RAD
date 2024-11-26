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
	std::list<Universidade*>::iterator IteradorLUniversidades = LUniversidades.begin();
	while(IteradorLUniversidades != LUniversidades.end())
	{
		if((*(IteradorLUniversidades))->getNome().compare(univ) == 0)
		{
            return *(IteradorLUniversidades);
		}
        ++IteradorLUniversidades;
    }
	return NULL;
}

std::list<Universidade*>::iterator ListaUniversidades::getBegin()
{
    return LUniversidades.begin();
}
std::list<Universidade*>::iterator ListaUniversidades::getEnd()
{
	return LUniversidades.end();
}
