#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"


double perc = 0.1;


class Especialista : public Funcionario {

    public:
	double comissao;
	double numAtendimentos;
        std::string especialidade;


	Especialista( double _SalarioBase, std::string _IDADE, std:: _nome, int rgFunc, std::string _especialidade){
		this->Funcionario( _SalarioBase, _IDADE, _nome, rgFunc);
		this->especialidade=_especialidade;
		this->comissao=0;
		this->numAtendimentos=0;
	}


	void comissao(double ValorVenda) {
        	this->comissao+=ValorVenda*perc;
		this->numAtendimentos++;
    	}


    	void print() {

        	std::cout << "[Especialista]" << std::endl;
        	this->Funcionario::print();
			std::cout << "Num Atendimentos: " << this->numAtendimentos << std::endl;
			std::cout << "Salario Total: " << this->SalarioBase+this->comissao<< std::endl;
        }
};

#endif
