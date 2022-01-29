#ifndef VENDA_HPP
#define VENDA_HPP

#include "Especialista.hpp"

class Venda{

    public:
    	double VALOR;
    	std::string descricao;
    	Especialista e0;
    	std::string cliente;


        Venda(double _VALOR, std::string _descricao, Especialista _esp, std::string _cliente){
	        this->VALOR=_VALOR;
	        this->descricao=_descricao;
	        this->e0=_esp;
	        this->cliente=_cliente;
        }


        void print() {

            std::cout << "Especialista: " << this->e0.nome ;

            std::cout << " Cliente: " << this->cliente;

            std::cout << " Descricao: " << this->descricao << std::endl;

            //std::cout << " : ";
            //cout << cliente;
        }

    /*void print() {

        std::cout << "Especialista: ";
        cout << esp.nome;

        std::cout << " Cliente: ";
        cout << cliente;
    }*/
};

#endif
