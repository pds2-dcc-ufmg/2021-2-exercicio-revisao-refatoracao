#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iomanip>
#include <iostream>

const double ValorBONIFICACAO = 15.0;

class Gerente {
   public:
    double _SalarioBase;  // valor manimo recebido pelo funcionario
    std::string _IDADE;
    std::string _nome;
    int _rgFunc;
    double _bonificacao = 0;

    Gerente(std::string nome, std::string IDADE, int rgFunc, double SalarioBase) {
        _nome = nome;
        _IDADE = IDADE;
        _rgFunc = rgFunc;
        _SalarioBase = SalarioBase;
    }

    void print() {
        std::cout << "[Funcionario]" << std::endl
                  << "[Gerente]" << std::endl
                  << "  Nome: " << _nome << std::endl
                  << "  Idade: " << _IDADE << std::endl
                  << "  RGFunc: " << _rgFunc << std::endl
                  << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << _SalarioBase << std::endl
                  << "  Salario Total: " << _SalarioBase + _bonificacao << std::endl;
    }

    double calcula_BONIFICACAO_GERENTE(int numTOTALVendas) {
        double x;
        return numTOTALVendas * ValorBONIFICACAO;
    }
};

#endif
