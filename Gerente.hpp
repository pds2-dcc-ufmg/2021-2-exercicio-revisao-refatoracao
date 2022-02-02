#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>
#include "Funcionario.hpp"

class Gerente : public Funcionario{
    public:
        void print() override {
            std::cout << "[Gerente]" << std::endl;
            std::cout << "  Nome: " << nome << std::endl;
            std::cout << "  Idade: " << idade << std::endl;
            std::cout << "  RG: " << rgFunc << std::endl;
            std::cout << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << salarioBase <<std::endl;
        }

        double calculaBonificacaoGerente(int numTotalVendas){
            return numTotalVendas*valorBonificacao;
        }
    private:
        double valorBonificacao = 15.0;
};



#endif

