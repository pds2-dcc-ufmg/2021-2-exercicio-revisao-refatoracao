#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>
#include "Funcionario.hpp"
class Gerente : public Funcionario{
    public:
        double valorBonificacao = 15.0;
        double salarioBase; // valor m�nimo recebido pelo funcion�rio
        std::string idade;
        std::string nome;
        int rgFunc;
        double bonificacao;

        std::string get_Idade();
        std::string get_Nome();
        int get_Rg();
        double get_Salario();

        void print();
        double calcula_BONIFICACAO_GERENTE(int numTOTALVendas);

};

#endif

