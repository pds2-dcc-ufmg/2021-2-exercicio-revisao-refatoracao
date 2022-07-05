#include <iostream>
#include <string>

#include "Venda.hpp"

void Venda::print() {
    cout << "Especialista: ";
    cout << especialista->getNome();
    cout << " Cliente: ";
    cout << cliente->getNome();
    cout << " Descricao: " << descricao << endl;
}

double Venda::getValorTotal(){
    return this->valorTotal;
}

string Venda::getDescricao() {
    return this->descricao;
}

Especialista * Venda::getEspecialista() {
    return this->especialista;
}

Cliente * Venda::getCliente() {
    return this->cliente;
}

void Venda::setValorTotal(double valorTotal){
    this->valorTotal = valorTotal;
}

void Venda::setDescricao(string descricao){
    this->descricao = descricao;
}

void Venda::setEspecialista(Especialista* especialista){
  this->especialista = especialista;
}

void Venda::setCliente(Cliente* cliente){
    this->cliente = cliente;
}