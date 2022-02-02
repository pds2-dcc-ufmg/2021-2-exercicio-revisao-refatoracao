#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>


const double ValorBONIFICACAO = 15.0;

class Gerente {
    private:
        double SalarioBase; // valor mínimo recebido pelo funcionário
        string Idade;
        string nome;
        int RgFunc;
        double Bonificacao;


        void print() {
            std::cout << "[Funcionario]" << std::endl;
            std::cout << "[Gerente]" << std::endl;
            std::cout << "  Nome: " << Nome << std::endl;
            std::cout << "  Idade: " << Idade << std::endl;
            std::cout << "  RGFunc: " << RgFunc << std::endl;
            std::cout << "  SalarioBase: R$ " << fixed << setprecision(2) << SalarioBase << std::endl;
        }

        double CalculaBonificacaoGerente(int NumTotalVendas){
            double ValorBonificacao;
            return NumTotalVendas*ValorBonificacao;
        }

};

#endif

