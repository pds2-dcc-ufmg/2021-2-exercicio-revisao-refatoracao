
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

using namespace std;

class Venda{

    public:
    double valor; // valor recebido na venda
    string descricao; // descrição do produto vendido
    Especialista esp; // o especialista que vendeu
    string cliente; // o cliente/comprador

    void print(); // imprime na tela todos os dados de uma venda efetuada
};

#endif
