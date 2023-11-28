#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

double ValorBONIFICACAO = 15.0;

class Gerente: public Funcionario {
    public:
        double _bonificacao;

        void print() {
            std::cout << "[Funcionario]" << endl;
            std::cout << "[Gerente]" << endl
            std::cout << "  Nome: " << Funcionario::_nome << endl
            std::cout << "  Idade: " << Funcionario::_idade << endl
            std::cout << "  RGFunc: " << Funcionario::_rgFunc << endl
            std::cout << "  SalarioBase: R$ " << fixed << setprecision(2) << Funcionario::_salarioBase <<endl;
        }

        double calcula_BONIFICACAO_GERENTE(int numTOTALVendas){
            double x;
            return numTOTALVendas*ValorBONIFICACAO;
        }

};

#endif

