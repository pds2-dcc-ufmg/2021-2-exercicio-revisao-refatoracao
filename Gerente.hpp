#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

class Gerente {
    private:
        double ValorBonificacao = 15.0;

    public:
        double SalarioBase;
        std::string Idade;
        std::string Nome;
        int rgFunc;
        double Bonificacao;

        void print() {
            std::cout << "[Funcionario]" << endl
            << "[Gerente]" << endl
            << "  Nome: " << Nome << std::endl
            << "  Idade: " << Idade << std::endl
            << "  RGFunc: " << rgFunc << std::endl
            << "  SalarioBase: R$ " << fixed << setprecision(2) << SalarioBase << std::endl;
        }

        double calcula_Bonificacao_Gerente(int NumTotalVendas){
            return NumTotalVendas*ValorBonificacao;
        }

};

#endif

