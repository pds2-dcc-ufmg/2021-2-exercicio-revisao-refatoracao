#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>
#include "Funcionario.hpp"

using namespace std;

double ValorBONIFICACAO = 15.0;

class Gerente : public Funcionario {
    public:
    void print() {
        cout << "[Funcionario]" << endl
        << "[Gerente]" << endl
        << "  Nome: ";
        print_nome();
        cout << "  Idade: ";
        print_idade();
        cout << "  RGFunc: ";
        print_rgFunc();
        cout << "  SalarioBase: R$ ";
        print_SalarioBase();
}

double calcula_BONIFICACAO_GERENTE(int numTOTALVendas){
    double x;
    return numTOTALVendas*ValorBONIFICACAO;
}

void get_bonificacao(double n){
    bonificacao = n;
}

double salario_total(){
    return SalarioBase + bonificacao;
}
    private: //membros privados
        double bonificacao;

};

#endif

