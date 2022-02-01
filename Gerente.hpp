#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>


class Gerente {
    public:

        void print();
        double calculaBonificacaoGerente(int numTOTALVendas);

        Gerente (std::string nome,
                 int idade,
                 int rgFunc,
                 int salarioBase);
        ~Gerente ();

        double getSalarioBase ();
        double getBonificacao ();


    private:

        const double VALOR_BONIFICACAO = 15.0;

        double salarioBase; // valor m�nimo recebido pelo funcion�rio
        double bonificacao;

        int rgFunc;
        int idade;

        std::string nome;
};

#endif

