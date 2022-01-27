#ifndef GERENTE_HPP
#define GERENTE_HPP

#include "Funcionario.hpp"
#include <iostream>
#include <iomanip>

double ValorBONIFICACAO = 15.0;

class Gerente:public Funcionario {
    public: 
        double bonificacao;

        void print() { // imprime informacoes do funcionario e gerente
            std::cout << "[Funcionario]" << std::endl
            << "[Gerente]" << std::endl
            << "  Nome: " << nome << std::endl
            << "  Idade: " << IDADE << std::endl
            << "  RGFunc: " << rgFunc << std::endl
            << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << SalarioBase << std::endl;
        }

        double calcula_BONIFICACAO_GERENTE(int numTOTALVendas){ // calcula bonificacai do gerente
            bonificacao = numTOTALVendas*ValorBONIFICACAO; 
            return bonificacao;
        }

};

#endif