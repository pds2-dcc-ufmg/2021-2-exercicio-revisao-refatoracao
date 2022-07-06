#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

double perc = 0.1;


class Especialista : public Funcionario {

    public:
    
    Especialista(string nome, int idade, int rg, double salarioBase, string especialidade): Funcionario(nome, idade, rg, salarioBase){}
    
    double calcula_comissao(double valorVenda);
    
    void print();

    string getNome();

    double getSalario();

    private:

    string _especialidade;

};

#endif
