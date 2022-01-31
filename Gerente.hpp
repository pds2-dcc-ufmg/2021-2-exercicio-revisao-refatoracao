#ifndef GERENTE_HPP
#define GERENTE_HPP

#include "Funcionario.hpp"

#include <iostream>
#include <iomanip>

class Gerente : public Funcionario {
    
    public:
        void print() override {
            std::cout << "[Funcionario]" << std::endl
            << "[Gerente]"               << std::endl
            << "  Nome: "   << nome      << std::endl
            << "  Idade: "  << idade     << std::endl
            << "  RGFunc: " << rgFunc    << std::endl
            << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << salarioBase << std::endl;
        }

        void setBonificacao(int totalVendas){
            this->bonificacao = totalVendas*bonus;
        }

        double getBonificacao(){
            return this->bonificacao;
        }

    private:
        double bonificacao;
        double bonus = 15.0;
};

#endif

