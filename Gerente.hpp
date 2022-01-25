#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

double ValorBONIFICACAO = 15.0;

class Gerente : public Funcionario {
    
    public:
        double bonificacao;


        void print() {
            std::cout << "[Funcionario]" << std::endl;
            std::cout << "[Gerente]" << std::endl;
            std::cout << "  Nome: " << nome << std::endl;
            std::cout << "  Idade: " << IDADE << std::endl;
            std::cout << "  RGFunc: " << rgFunc << std::endl;
            std::cout << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << SalarioBase << std::endl;
        }

        double calcula_BONIFICACAO_GERENTE(int numTOTALVendas) {
            double x;
            return numTOTALVendas*ValorBONIFICACAO;
        }

};
#endif
