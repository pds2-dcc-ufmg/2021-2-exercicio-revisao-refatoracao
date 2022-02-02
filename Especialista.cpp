#include <iostream>
#include <string>
#include "Especialista.hpp"
using namespace std;

double Especialista::comissao(double valor_vnd) {
    return valor_vnd*perc;
}
    
void Especialista::print() {
    cout << "[Especialista]" << endl;
    Funcionario::print();
}
        
