#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>


class Gerente {
    public:
        double salarioBase; // valor m�nimo recebido pelo funcion�rio
        std::string idade;
        std::string nome;
        int rgFunc;
        double bonificacao;


        void print() const;
        double calcula_bonificacao_gerente(int numTotalVendas);

};

#endif

