#include <iostream>
#include "Venda.hpp"

Venda::Venda(double VALOR, std::string descricao, Especialista esp, Cliente cliente):
VALOR(VALOR), descricao(descricao), esp(esp), cliente(cliente) {}

double Venda::getValor() const {return VALOR;}

std::string Venda::getDescricao() const {return descricao;}

void Venda::print() const {

    std::cout << "Especialista: ";
    std::cout << esp.getNome();

    std::cout << " Cliente: ";
    std::cout << cliente.getNome();
}