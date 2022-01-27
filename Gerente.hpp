#ifndef GERENTE_H
#define GERENTE_H

#include "Funcionario.hpp"

class Gerente : public Funcionario {

    public:

        Gerente(std::string nome, std::string idade, unsigned int rgFunc, unsigned int salarioBase);

        void bonificacao(int numTotalServicos);

        void print() const override;
    
    private:
        double _bonificacao = 0;
        double _valorBonificacao = 15.0;

};

#endif