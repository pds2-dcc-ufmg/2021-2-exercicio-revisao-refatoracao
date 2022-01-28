#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

double ValorBONIFICACAO = 15.0;

class Gerente {
    public:
        double SalarioBase, bonificacao;
        std::string IDADE, nome;
        int rgFunc;

        void print(){
            std::cout << "[Funcionario]" << std::endl
            << "[Gerente]" << std::endl
            << "  Nome: " << nome << std::endl
            << "  Idade: " << IDADE << std::endl
            << "  RGFunc: " << rgFunc << std::endl
            << "  SalarioBase: R$ " << fixed << setprecision(2) << SalarioBase << std::endl;
        }

        double calcula_BONIFICACAO_GERENTE(int numTOTALVendas){
            return numTOTALVendas * ValorBONIFICACAO;
        }
};

#endif

