#include <iostream>

#include "Venda.hpp"


Venda::Venda(double valor, std::string descricao, Especialista &esp, std::string cliente){
    this->valor = valor;
    this->descricao = descricao;
    this->esp = &esp;
    this->cliente = cliente;
}

void Venda::print() {
    std::cout << "Especialista: ";
    std::cout << this->esp->getNome();
    std::cout << " Cliente: ";
    std::cout << this->cliente;
}