#pragma once
#include <string>
#include <vector>

class Universidade;
class Disciplina;

using namespace std;

class Departamento
{
private:
	string nome;
	Universidade* pUniv;
	int id;
public:
	Departamento(int id);
	~Departamento();
	void setNome(const char* n);
	string getNome();
	void setUniversidade(Universidade* pu);
	Universidade* getUniversidade();
	void incluaDisciplina(Disciplina* pdi);
	int getId();
	vector<Disciplina*> pObjLDisciplinas;
};