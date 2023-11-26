#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

const double PERC = 0.1;

class Especialista : public Funcionario {
private:
	string _especialidade;
	int _num_atendimentos;
	double _comissao;

public:
	Especialista(string especialidade,
							int num_atendimentos,
							double comissao, 
							double salario_base, 
							string nome, 
							string idade, 
							int rg_func):
		_especialidade(especialidade),
		_num_atendimentos(num_atendimentos),
		_comissao(comissao),
		Funcionario(salario_base, idade, nome, rg_func) {}

	void print() {
		cout << "[Especialista]" << endl;
		Funcionario::print();

		cout << "  Nome: " << _nome << endl
			<< "  SalarioBase: R$ " << fixed << setprecision(2) 
			<< _salario_base << endl;

		cout << "Num Atendimentos: " << _num_atendimentos << endl;
		cout << "Salario Total: " << _salario_base + _comissao <<endl;
	}

	void venda(double valor_venda) {
		_num_atendimentos++;
		_comissao += PERC*valor_venda;
	}

	int get_num_atendimentos() { return _num_atendimentos; }
};

#endif
