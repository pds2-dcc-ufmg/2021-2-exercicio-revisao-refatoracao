#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>


class Gerente {
    public:
        double salarioBase; 
        std::string idade;
        std::string nome;
        int rg;
        double bonificacao;


        void imprimeDadosGerente() {
            std::cout << "[Funcionario]" << std::endl
            << "[Gerente]" << std::endl
            << "  Nome: " << nome << std::endl
            << "  Idade: " << idade << std::endl
            << "  RGFunc: " << rg << std::endl
            << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << salarioBase <<std::endl;
        }

        double calculaBonificacaoGerente(int numTOTALVendas){
            return numTOTALVendas*ValorBONIFICACAO;
        }
    private:
        double ValorBONIFICACAO = 15.0;

};

#endif

