#include "Venda.hpp"

void Venda::print() {
    std::cout << "Especialista: ";
    std::cout << especialista->getNome();
    std::cout << " Cliente: ";
    std::cout << cliente->getNome();
}

void Venda::setValor(double valor){
    this->valor = valor;
}

void Venda::setDescricao(std::string descricao){
    this->descricao = descricao;
}

void Venda::setEspecialista(Especialista* especialista){
    this->especialista = especialista;
}

void Venda::setCliente(Cliente* cliente){
    this->cliente = cliente;
}

double Venda::getValor(){
    return this->valor;
}

std::string Venda::getDescricao(){
    return this->descricao;
}

Especialista* Venda::getEspecialista(){
    return this->especialista;
}

Cliente* Venda::getCliente(){
    return this->cliente;
}
