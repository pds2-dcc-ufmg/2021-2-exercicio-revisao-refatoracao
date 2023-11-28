#ifndef GERENTE_HPP
#define GERENTE_HPP

#include "Funcionario.hpp"

class Gerente : public Funcionario {
public:
    double bonificacao;

    virtual void print() override; // sobrescrevendo a função print da classe base
    virtual double calculaBonificacao(int numTOTALVendas); // mantendo a função original
    virtual double getSalarioTotal() override; // sobrescrevendo a função getSalarioTotal da classe base
    void setBonificacao(double bonificacao); // adicionando um método para definir a bonificação
};

#endif
