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
	IteradorLDepartamentos = LDepartamentos.begin();
	while(((*(IteradorLDepartamentos))->getNome().compare(n))){
		IteradorLDepartamentos++;
	}
	return (*(IteradorLDepartamentos));
}
