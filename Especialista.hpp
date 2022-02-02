#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include <string>

using namespace std;

class Especialista : public Funcionario {

    public:

    Especialista(){}
    
    Especialista(string nome,  string IDADE, int rgFunc, double SalarioBase);

    double comissao(double ValorVenda);

    void print();

};

#endif
