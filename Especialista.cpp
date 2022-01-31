#include <iostream>
#include "Especialista.hpp"

double Especialista::comissao (double ValorVenda) {

    return ValorVenda * this->perc;
}

void Especialista::print() {

    std::cout << "[Especialista]" << endl;
    Funcionario::print();

}