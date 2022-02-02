#include <iostream>
#include <string>
#include "Venda.hpp"
using namespace std;

double Venda::getValor(){ 
    return this->valor;
}
void Venda::setValor(double valorNovo){
    this->valor = valorNovo;
}

string Venda::getDescricao(){ 
    return this->descricao;
}
void Venda::setDescricao(string descricaoNovo){
    this->descricao = descricaoNovo;
}

string Venda::getCliente(){ 
    return this->cliente;
}
void Venda::setCliente(string clienteNovo){
    this->cliente = clienteNovo;
}

Especialista Venda::getEsp(){ 
    return this->esp;
}
void Venda::setEsp(Especialista espNovo){
    this->esp = espNovo;
}

void Venda::print() {

    cout << "Especialista: ";
    cout << esp.getNome();

    cout << " Cliente: ";
    cout << this->cliente;
}
