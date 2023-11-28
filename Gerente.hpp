#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include "Funcionario.hpp"

using namespace std;

class Gerente : public Funcionario {
public:
    double SalarioBase; // valor minimo recebido pelo funcionario
    string IDADE;
    string nome;
    int rgFuncionario;
    double bonificacao;
    void print() {
        cout << "[Funcionario]" << endl
        << "[Gerente]" << endl
        << "  Nome: " << nome << endl
        << "  Idade: " << IDADE << endl
        << "  RGFunc: " << rgFuncionario << endl
        << "  SalarioBase: R$ " << fixed << setprecision(2) << SalarioBase << endl;
    }
    double calcula_BONIFICACAO_GERENTE(int numTOTALVendas){        
        return numTOTALVendas*bonificacao;
    }

};

#endif

