#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"


double perc = 0.1;


class Especialista : public Funcionario {

    public:

        std::string especialidade;

	double comissao(double ValorVenda) {
        	double c = ValorVenda*perc;
        	return c;
    	}


    	void print() {

        	std::cout << "[Especialista]" << std::endl;
        	Funcionario::print();

        }
};

#endif
