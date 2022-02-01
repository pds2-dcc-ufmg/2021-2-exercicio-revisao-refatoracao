#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

double ValorBONIFICACAO = 15.0;

class Gerente {
    private:
        double SalarioBase;
        std::string IDADE;
        std::string nome;
        int rgFunc;
        double bonificacao;
    
    public:
        void print() {
            std::cout << "[Funcionario]" << std::endl
            << "[Gerente]" << std::endl
            << "  Nome: " << nome << std::endl
            << "  Idade: " << IDADE << std::endl
            << "  RGFunc: " << rgFunc << std::endl
            << "  SalarioBase: R$ " << fixed << setprecision(2) << SalarioBase << std::endl;
        }

        double calcula_BONIFICACAO_GERENTE(int numTOTALVendas){
            double x;
            return numTOTALVendas*ValorBONIFICACAO;
        }
};

#endif

