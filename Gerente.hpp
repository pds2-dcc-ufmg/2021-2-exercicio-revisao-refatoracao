#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>
#include "Funcionario.hpp"


class Gerente: public Funcionario {
    public:
        double SalarioBase; // valor m�nimo recebido pelo funcion�rio
        std::string IDADE;
        std::string nome;
        int rgFunc;
        double bonificacao;
        double ValorBONIFICACAO = 15.0;

        void print() override;

        double calcula_BONIFICACAO_GERENTE(int numTOTALVendas);

};

#endif

