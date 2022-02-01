#ifndef GERENTE_HPP
#define GERENTE_HPP

#include "Funcionario.hpp"

class Gerente : public Funcionario 
{
    public:
        Gerente();
        Gerente(std::string, int, int, double);

        void imprimeDados() override;
        void adicionaBonificacao(int numTotalVendas);

    private:
        const double bonificacao = 15.0;
};

#endif

