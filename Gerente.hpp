#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

#include "Funcionario.hpp"

using namespace std;

const double VALOR_BONIFICACAO = 15.0;

class Gerente: public Funcionario {
private:
	double _bonificacao;

public:
	Gerente(double bonificacao,
				 double salario_base,
				 string nome,
				 string idade,
				 int rg_func):
		_bonificacao(bonificacao),
		Funcionario(salario_base, nome, idade, rg_func) {}

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
		return num_total_vendas*VALOR_BONIFICACAO;
	}

};

#endif

