#pragma once
#include <iostream>
#include <string>
#include <vector>
#include "Departamento.h"

using namespace std;

class Universidade
{
private:
	string nome;
	int id;
public:
	Universidade(int id);
	~Universidade();
	void setNome(const char* n);
	string getNome();
	void incluaDepartamento(Departamento* pd);
	int getId();
	vector<Departamento*> ObjLDepartamentos;
};