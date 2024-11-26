#pragma once
#include <iostream>
#include <list>
#include "Universidade.h"

class ListaUniversidades
{
private:
    std::list<Universidade*> LUniversidades;
public:
	ListaUniversidades(int nd = 1000);
	~ListaUniversidades();
	void incluaUniversidade(Universidade* pdi);
	Universidade* localizar(const char* univ);
	std::list<Universidade*>::iterator getBegin();
	std::list<Universidade*>::iterator getEnd();
};