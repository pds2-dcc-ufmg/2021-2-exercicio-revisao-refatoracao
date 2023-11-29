#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"

class Especialista : public Funcionario {

  public:
	std::string especialidade;

        double comissao(double valorVenda);          

	void print();
};

#endif
