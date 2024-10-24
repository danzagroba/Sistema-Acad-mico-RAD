#include "Disciplina.h"

// construtora e destrutora
Disciplina::Disciplina(int id)
{
	pDeptoAssociado = NULL;
}
Disciplina::~Disciplina()
{
	pDeptoAssociado = NULL;
}
// sets e gets
void Disciplina::setId(int n)
{
	id = n;
}
int Disciplina::getId()
{
	return id;
}
void Disciplina::setNome(const char* n)
{
	nome = n;
}
string Disciplina::getNome()
{
	return nome;
}
void Disciplina::setDepartamento(Departamento* pd)
{
	pDeptoAssociado = pd;
}
Departamento* Disciplina::getDepartamento() {
	return pDeptoAssociado;
}
// metodos de inclusao na lista e de listagem
void Disciplina::incluaAluno(Aluno* pa)
{
	ObjLAlunos.push_back(pa);
	pa->setDisciplina(this);
}
