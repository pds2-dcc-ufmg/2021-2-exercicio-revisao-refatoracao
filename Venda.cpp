#include <iostream>
#include <string>
#include "Venda.hpp"

Venda::Venda(string cliente, Especialista especialista, double valor, string descricao): _especialista(especialista){
    _cliente = cliente;
    _valor = valor;
    _descricao = descricao;
}

void Venda::print() {
    std::cout << "Especialista: " << _especialista.getNome();
    std::cout << " Cliente: " << _cliente;
}

double Venda::getValor(){
    return _valor;
}

string Venda::getDescricao(){
    return _descricao;
}