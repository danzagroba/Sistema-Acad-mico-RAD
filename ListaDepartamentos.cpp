#include "ListaDepartamentos.h"

ListaDepartamentos::ListaDepartamentos(int nd)
{
}
ListaDepartamentos::~ListaDepartamentos(){}
void ListaDepartamentos::incluaDepartamento(Departamento* pdi)
{
	LDepartamentos.push_back(pdi);
}
// localiza uma universidade de nome "n" na lista de universidades
Departamento* ListaDepartamentos::localizar(const char* n)
{
	std::list<Departamento*>::iterator IteradorLDepartamentos = LDepartamentos.begin();
	while(IteradorLDepartamentos != LDepartamentos.end())
	{
		if((*(IteradorLDepartamentos))->getNome().compare(n) == 0)
		{
			return *(IteradorLDepartamentos);
		}
		++IteradorLDepartamentos;
    }
	return NULL;
}

std::list<Departamento*>::iterator ListaDepartamentos::getBegin()
{
	return LDepartamentos.begin();
}
std::list<Departamento*>::iterator ListaDepartamentos::getEnd()
{
	return LDepartamentos.end();
}
