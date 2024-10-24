#include "Universidade.h"

// construtora e destrutora
Universidade::Universidade(int Id)
{
	id = Id;
}
Universidade::~Universidade()
{
}
// sets e gets
void Universidade::setNome(const char* n)
{
	nome=n;
}
string Universidade::getNome()
{
	return nome;
}
int Universidade::getId() {
	return id;
}

// metodos de inclusao na lista e de listagem
void Universidade::incluaDepartamento(Departamento* pd) {
	ObjLDepartamentos.push_back(pd);
	pd->setUniversidade(this);

}
