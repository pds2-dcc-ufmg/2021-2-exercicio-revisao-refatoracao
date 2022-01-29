#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"


double perc = 0.1;


class Especialista : public Funcionario {

    public:
		double comissao;
		int numAtendimentos;
        std::string especialidade;


		Especialista(double _SalarioBase, std::string _IDADE, std::string _nome, int _rgFunc, std::string _especialidade){
			this->SalarioBase=_SalarioBase;
			this->IDADE=_IDADE;
			this->nome=_nome;
			this->rgFunc=_rgFunc;
			this->especialidade=_especialidade;
			this->comissao=0;
			this->numAtendimentos=0;
		}

		Especialista(){
			this->SalarioBase=0.0;
			this->IDADE="";
			this->nome="";
			this->rgFunc=0;
			this->especialidade="";
			this->comissao=0;
			this->numAtendimentos=0;
		}


		void comissao_inc(double ValorVenda) {
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
