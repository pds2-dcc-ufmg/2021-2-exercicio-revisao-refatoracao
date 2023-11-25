#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

#include "Funcionario.hpp"

using namespace std;

const double VALOR_BONIFICACAO = 15.0;

class Gerente: public Funcionario {
public:
	double bonificacao;

	void print() {
		cout << "[Funcionario]" << endl
			<< "[Gerente]" << endl
			<< "  Nome: " << _nome << endl
			<< "  Idade: " << _idade << endl
			<< "  RGFunc: " << _rg_func << endl
			<< "  SalarioBase: R$ " << fixed << setprecision(2) 
			<< _salario_base << endl;
	}

	double calcula_bonificacao_gerente(int num_total_vendas){
		double x;
		return num_total_vendas*VALOR_BONIFICACAO;
	}

};

#endif

