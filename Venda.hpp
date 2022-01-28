
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Especialista.hpp"

class Venda{

    public:
    	double VALOR;
    	std::string descricao;
    	Especialista esp;
    	std::string cliente;


    void print() {

        std::cout << "Especialista: " << this->esp.nome << std::endl;

        std::cout << " Cliente: " << this->cliente << syd::endl;

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
