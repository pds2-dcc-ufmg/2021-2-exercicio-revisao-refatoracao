#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {
protected:
	double _salario_base; // valor mínimo recebido pelo funcionário
	string _idade;
	string _nome;
	int _rg_func;

public:
	Funcionario(double salario_base, string idade, string nome, int rg_func):
		_salario_base(salario_base),
		_idade(idade),
		_nome(nome),
		_rg_func(rg_func) {}

	void print() {
		cout << "[Funcionario]" << endl
			<< "  Idade: " << _idade << endl
			<< "  RGFunc: " << _rg_func << endl;
	}
};

#endif
