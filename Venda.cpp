#include "Venda.hpp"
#include <iostream>
#include <vector>


Venda::Venda(std::string cliente, Especialista esp, std::string descricao, double valor){
    this->cliente = cliente;
    this->esp = esp;
    this->descricao = descricao;
    this-> valor = valor;
}

void Venda::print(){
    std::cout << "Especialista: " << esp.nome << " Cliente: " << cliente;
}
