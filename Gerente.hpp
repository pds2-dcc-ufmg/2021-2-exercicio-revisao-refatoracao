#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

double valorBonificacao = 15.0;

class Gerente {
    public:
        double SalarioBase; // valor minimo recebido pelo funcionario
        std::string IDADE;
        std::string nome;
        int rgFunc;
        double bonificacao;


        void print() const {
            std::cout << "[Funcionario]" << std::endl
            << "[Gerente]" << std::endl
            << "  Nome: " << nome << std::endl
            << "  Idade: " << IDADE << std::endl
            << "  RGFunc:: " << rgFunc << std::endl
            << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << SalarioBase << std::endl;
        }

        double calculaBonificacao(int numTotalVendas){
            return numTotalVendas*valorBonificacao;
        }
};

#endif

