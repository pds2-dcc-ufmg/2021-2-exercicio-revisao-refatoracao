#include "Venda.hpp"

#include <iostream>
#include <string>

Venda::Venda(double valor, std::string descricao, Especialista* especialista, Cliente* cliente) {

    this->valor = valor;
    this->descricao = descricao;
    this->especialista = especialista;
    this->cliente = cliente;

}

void Venda::setValor(double valor) {

    this->valor = valor;

}

void Venda::setDescricao(std::string descricao) {

    this->descricao = descricao;

}

void Venda::setEspecialista(Especialista* especialista) {

    this->especialista = especialista;

}

void Venda::setCliente(Cliente* cliente) {

    this->cliente = cliente;

}

double Venda::getvalor() {

    return this->valor;

}

std::string Venda::getDescricao() {

    return this->descricao;

}

Especialista* Venda::getEspecialista() {

    return this->especialista;

}

Cliente* Venda::getCliente() {

    return this->cliente;

}

void Venda::adicionarComissao() {

    this->especialista->calcularComissao(this->getvalor());
    
}

void Venda::print() {

        std::cout << "Especialista: ";
        std::cout << especialista->getNome();

        std::cout << " Cliente: ";
        std::cout << cliente->getNome();

        std::cout << " Descricao: " << this->descricao << std::endl;

}