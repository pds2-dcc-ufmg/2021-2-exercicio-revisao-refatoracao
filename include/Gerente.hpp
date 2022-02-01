#ifndef GERENTE_HPP
#define GERENTE_HPP

#include "Funcionario.hpp"


class Gerente : public Funcionario{

    public:

        Gerente(std::string nome, std::string idade, double salario, int Registro);
        void print();
        double calcula_BONIFICACAO_GERENTE(int numTOTALVendas);

};

#endif

