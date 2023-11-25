#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {
public:
	double _salario_base; // valor mínimo recebido pelo funcionário
	string _idade;
	string _nome;
	int _rg_func;

	void print() {
		cout << "[Funcionario]" << endl
			<< "  Idade: " << _idade << endl
			<< "  RGFunc: " << _rg_func << endl;
	}
};

#endif
