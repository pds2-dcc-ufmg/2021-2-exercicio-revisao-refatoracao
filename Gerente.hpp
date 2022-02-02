#ifndef GERENTE_HPP
#define GERENTE_HPP

#define BONIFICACAO 15
#include "Pessoa.hpp"
#include "Funcionario.hpp"

using namespace std;

class Gerente : public Funcionario {
    public:
        Gerente(double salarioBase, string idade, string nome, int RG, string bonificacao);
        void print() const override;
        double calcula_BONIFICACAO_GERENTE(int numTOTALVendas);
    
    private:
        double bonificacao;
};

#endif
