#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario
{
public:
    Funcionario(string nome, int idade, int rg, double salarioBase) : nome(nome), idade(idade), rg(rg), salarioBase(salarioBase) {};
    string getNome();
    double getSalarioBase();
    void imprimir();

protected:
    string nome;
    int idade;
    int rg;
    double salarioBase; //valor minimo recebido pelo funcionario
};

#endif
