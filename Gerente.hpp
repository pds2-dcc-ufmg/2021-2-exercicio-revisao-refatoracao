#ifndef GERENTE_HPP
#define GERENTE_HPP

#include "Funcionario.hpp"


double ValorBONIFICACAO = 15.0;

class Gerente : public Funcionario {
    public:
        double bonificacao;

	    Gerente(double _SalarioBase, std::string _IDADE, std::string _nome, int _rgFunc){
		    this->SalarioBase=_SalarioBase;
			this->IDADE=_IDADE;
			this->nome=_nome;
			this->rgFunc=_rgFunc;

        }
        void print() {
            std::cout << "[Gerente]" << std::endl;
            Funcionario::print();
        }


        double calcula_BONIFICACAO_GERENTE(int numTOTALVendas){
            this->bonificacao= numTOTALVendas*ValorBONIFICACAO;
            return this->bonificacao;
        }


};

#endif

