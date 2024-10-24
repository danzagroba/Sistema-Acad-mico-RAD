#pragma once
#include "ElDepartamento.h"
#include "Departamento.h"
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>

class ListaDepartamentos
{
private:
	int cont_disc;
	int numero_disc;
	ElDepartamento *pElDepartamentoPrim;
	ElDepartamento *pElDepartamentoAtual;
public:
	ListaDepartamentos(int nd = 1000);
	~ListaDepartamentos();
	void incluaDepartamento(Departamento* pdi);
	void listeDepartamentos();
	Departamento* localizar(const char* n);
	ElDepartamento* getDepartamentoPrim();
    TListBox* ListBox1;
};