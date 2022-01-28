#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

double perc = 0.1;
double percWanda = 0.1;


class Especialista : public Funcionario {

    public:

    public:
        string especialidade;

    double comissao(double ValorVenda);// calcula a comissão destinada a um Especialista de acordo com sua venda.


    void print();// imprime na tela os dados do salario de um Especialista cadastrado.
};

#endif
