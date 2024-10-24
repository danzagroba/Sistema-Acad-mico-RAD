#pragma once
#include <list>
#include "Departamento.h"

using namespace std;
class ListaDepartamentos
{
private:
public:
	ListaDepartamentos(int nd = 1000);
	~ListaDepartamentos();
	void incluaDepartamento(Departamento* pdi);
	Departamento* localizar(const char* n);
	std::list<Departamento*> LDepartamentos;
	std::list<Departamento*>::iterator IteradorLDepartamentos;
};