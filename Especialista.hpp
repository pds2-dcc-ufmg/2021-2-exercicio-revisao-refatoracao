#pragma once
#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;
class Especialista : public Funcionario {
public:
    string especialidade;
    void print();//imprime a idade e o RG do Funcionario 
    double comissao(double ValorVenda);//retorna a comissao recebida pelo Especialista
};

