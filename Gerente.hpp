#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

#include <Funcionario.hpp>

using namespace std;

class Gerente : public Funcionario
{
private:
    int numeroDeVendas;

public:
    Gerente(double salarioBase, int idade, string nome, int rgFunc);

    void print();
    double getBonificacao();
    void addVendas(int);
    double getSalarioTotal();
};

#endif

