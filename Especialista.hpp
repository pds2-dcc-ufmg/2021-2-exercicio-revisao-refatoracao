#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

const double PERC = 0.1;
const double PERC_WANDA = 0.1;

class Especialista : public Funcionario {
public:
	string especialidade;

	double comissao(double ValorVenda) {
		double c = ValorVenda*PERC;
		return c;
	}


	void print() {

		std::cout << "[Especialista]" << endl;
		Funcionario::print();

		std::cout << "  Nome: " << _nome << endl
			<< "  SalarioBase: R$ " << fixed << setprecision(2) 
			<< _salario_base <<endl;

	}
};

#endif
