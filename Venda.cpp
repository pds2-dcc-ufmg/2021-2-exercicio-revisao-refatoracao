#include  <string>
#include <iostream>
#include "Venda.hpp"

double Venda::getValor(){
    return valor;
}
string Venda::getDescricao(){
    return descricao;
}

string Venda::getCliente(){
    return cliente;
}

void Venda::print(){
    cout << "Especialista: " << esp.getNome();
    cout << " Cliente: " << cliente;
}