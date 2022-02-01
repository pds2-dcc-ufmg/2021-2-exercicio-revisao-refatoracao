
#include <iostream>
#include <string>
#include "Especialista.hpp"


double perc = 0.1;
double Especialista::comissao(double ValorVenda) {
    double c = ValorVenda*perc;
    return c;
}

void Especialista::print() {

     std::cout << "[Especialista]" << endl;
     Funcionario::print();

}