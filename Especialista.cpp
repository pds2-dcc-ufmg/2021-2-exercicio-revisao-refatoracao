#include <iostream>
#include <string>
#include "Especialista.hpp"
using namespace std;

double Especialista::comissao(double ValorVenda) {
    double c = ValorVenda*perc;
    return c;
}
    
void Especialista::print() {
    cout << "[Especialista]" << endl;
    Funcionario::print();
}
        
