#ifndef GERENTE_H
#define GERENTE_H

#include "Funcionario.hpp"

#include <iomanip>
#include <iostream>
#include <string>

 //padronizar nomeclatura

class Gerente : public Funcionario {
    public:

        Gerente(std::string nome, int rgFuncionario, int idade, double salarioBase, double bonificacao = 0, double valorBonificacao = 15.0);
        void setBonificacao(double bonificacao);
        double getBonificacao();
        double calcularBonificacao(int numTotalVendas);
        void print() const override;
    
    private:

        double bonificacao;
        double valorBonificacao;

};

#endif

