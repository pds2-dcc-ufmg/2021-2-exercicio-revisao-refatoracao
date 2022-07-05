#pragma once
#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

using namespace std;
class Venda{
public:
    double valor;//preco do servico 
    string descricao;//descricao do servico prestado
    Especialista esp;//Especialista prestador do servico
    string cliente;//nome do Cliente
    void print();//imprime nome do Especialista e do Cliente
};
