#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

class Especialista : public Funcionario {

	private:
		double percentualComissao = 0.1; //percentual da venda que o vendedor recebe como comissão
		std::string especialidade;

	public:
		double comissao(double valorVenda);
                void print();
};

#endif
