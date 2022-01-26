#ifndef GERENTE_HPP
#define GERENTE_HPP

#include "Funcionario.hpp"
#include <iostream>
#include <iomanip>

double ValorBONIFICACAO = 15.0;

class Gerente:public Funcionario {
    public: // apaguei as variaveis e transformei Gerente uma subclasse de Funcionario
        double bonificacao;

        void print() {
            std::cout << "[Funcionario]" << std::endl
            << "[Gerente]" << std::endl
            << "  Nome: " << nome << std::endl
            << "  Idade: " << IDADE << std::endl
            << "  RGFunc: " << rgFunc << std::endl
            << "  SalarioBase: R$ " << fixed << setprecision(2) << SalarioBase << std::endl;
        }

        double calcula_BONIFICACAO_GERENTE(int numTOTALVendas){
            bonificacao = numTOTALVendas*ValorBONIFICACAO; // tirei o x e coloquei a bonificacao.
            return bonificacao;
        }

};

#endif