#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

using namespace std;

const double VALOR_BONIFICACAO = 15.0;

class Gerente {
public:
	double _salario_base; // valor mínimo recebido pelo funcionário
	string _idade;
	string _nome;
	int _rg_func;
	double _bonificacao;


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

