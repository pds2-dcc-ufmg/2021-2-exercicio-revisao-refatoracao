#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>
#include "Servidor.hpp"

using namespace std;

const int VALORBONIFICACAO = 15.0;

class Gerente : public Servidor {
public:
    double bonificacao;


    double calcula_BONIFICACAO_GERENTE(int numTOTALVendas) {
        double x;
        return numTOTALVendas * VALORBONIFICACAO;
    }

    void print() override {
        std::cout << "[Funcionario]" << std::endl
                  << "[Gerente]" << std::endl
                  << "  Nome: " << nome << std::endl
                  << "  Idade: " << idade << std::endl
                  << "  RGFunc: " << rgFunc << std::endl
                  << "  salarioBase: R$ " << std::fixed << std::setprecision(2) << salarioBase << std::endl;
    }
};

#endif

