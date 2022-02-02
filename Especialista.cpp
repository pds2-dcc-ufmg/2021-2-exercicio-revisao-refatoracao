#include <iostream>
#include <string>
#include "Especialista.hpp"
using namespace std;

double Especialista::comissao(double valor_vnd) {
    double c = valor_vnd*perc;
    return c;
}
    
void Especialista::print() {
    cout << "[Especialista]" << endl;
    Funcionario::print();
}
        
