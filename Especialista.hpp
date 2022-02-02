#ifndef Especialista_HPP
#define Especialista_HPP

#include <iostream>
#include <iomanip>
#include <string>

#include "Funcionario.hpp"
#include "Cliente.hpp"
using namespace std;
class Especialista : public Funcionario {

    public:
        string especialidade;

    Especialista () {};
    Especialista(double salarioBase, string idade, string nome, int rgFunc, string especialidade);
    double comissao(double valorVenda);
    void printEspecialista();
};

#endif
