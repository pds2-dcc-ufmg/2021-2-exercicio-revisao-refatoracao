#include <iostream>
#include <string>
#include "Gerente.hpp"
using namespace std;

void Gerente::print() {
    cout << "[Gerente]" << endl;
    Funcionario::print();
}

double Gerente::calcula_bon_ger(int num_tot_vnd){
    return num_tot_vnd*valor_bon;
}
