#ifndef GERENTE_HPP
#define GERENTE_HPP

#include "Funcionario.hpp"

using namespace std;

class Gerente : public Funcionario  {
    private:
        const double VALOR_BONIFICACAO = 15.0; // valor da bonificacao por venda

    public:
        double bonificacao;

        void imprimeFuncionario();

        void calculaBonificacaoGerente(int numTotalVendas);

};

#endif

