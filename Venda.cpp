#include <iostream>

#include "Venda.hpp"

Venda::Venda(){}

Venda::Venda(Cliente *_cliente, Especialista *_especialista, std::string descricao, double valor){

    this->cliente = *_cliente;
    this->especialista = *_especialista;
    this->Descricao = descricao;
    this->Valor = valor;
    _especialista->novoAtendimento();

}

void Venda::print() {

    std::cout << "Especialista: " << this->especialista.getNome();
    std::cout << " Cliente: " << this->cliente.getNome();
    std::cout << " Descricao: " << this->Descricao << std::endl;

}

double Venda::getValor(){

    return this->Valor;

}
