#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

#include "Funcionario.hpp"

using namespace std;

double valorBonus = 15.0;

class Gerente: public Funcionario {
    
    public:
    
    double bonificacao;
    
    double calcula_bonus(int totalVendas);
    
    void print();

};

#endif
