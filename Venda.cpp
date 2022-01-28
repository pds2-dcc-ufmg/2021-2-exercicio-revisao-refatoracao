#include <iostream>
#include <string>
#include "Venda.hpp"

double Venda::getValor() {

    return valor;

}

string Venda::getDescricao() {

    return descricao;

}

Especialista Venda::getEsp() {

    return esp;

}

string Venda::getcliente() {

    return cliente;

}

void Venda::print() {

    std::cout << "Especialista: ";
    cout << esp.getNome();

    std::cout << " Cliente: ";
    cout << cliente;

}

Venda::Venda(double valor, string descricao, Especialista esp, string cliente) {

    this->valor = valor;
    this->descricao = descricao;
    this->esp = esp;
    this->cliente = cliente;

}