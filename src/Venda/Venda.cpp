#include <iostream>
#include <string>
#include "../../include/Venda/Venda.hpp"



Venda::Venda(double valor,string descricao, Especialista esp,string cliente){
    _VALOR = valor;
    _descricao = descricao;
    _esp = esp;
    _cliente = cliente;
}
double Venda::getValor(){
    return _VALOR;
}
void Venda::setValor(double novoValor){
    _VALOR = novoValor;
}
void Venda::setDescricao(string novaDescricao){
    _descricao = novaDescricao;
}
void Venda::print() {

    std::cout << "Especialista: ";
    cout << _esp.getNome();

    std::cout << " Cliente: ";
    cout << _cliente;

    std::cout << " Descricao: " << _descricao << endl;
}
