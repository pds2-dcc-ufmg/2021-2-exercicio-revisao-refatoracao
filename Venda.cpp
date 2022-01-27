#include <iostream>
#include <iomanip>
#include <string>
#include "Venda.hpp"

double Venda::getValor()  const{
    return valor;
}
std::string Venda::getDescricao()  const{
    return descricao;
}

void Venda::setValor(double valor){
    this->valor = valor;
}
void Venda::setDescricao(std::string descricao){
    this->descricao = descricao;
}
void Venda::setEsp(Especialista esp){
    this->esp = esp;
}
void Venda::setCliente(std::string cliente){
    this->cliente = cliente;
}

void Venda::print() {

    std::cout << "Especialista: ";
    std::cout << esp.nome;

    std::cout << " Cliente: ";
    std::cout << this->cliente;

}