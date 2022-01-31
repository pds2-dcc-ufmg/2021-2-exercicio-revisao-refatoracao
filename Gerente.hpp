#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>


class Gerente {
    public:

        virtual void print();

        virtual double calcula_BONIFICACAO_GERENTE(int numTOTALVendas);


    private:

        const double VALOR_BONIFICACAO = 15.0;
        double SalarioBase; // valor m�nimo recebido pelo funcion�rio
        double bonificacao;

        int rgFunc;

        std::string idade;
        std::string nome;
};

#endif

