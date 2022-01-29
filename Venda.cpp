#include "Venda.hpp"

Venda::Venda(double valor, std::string descricao, std::string cliente, Especialista& esp){
    this->valor = valor;
    this->descricao = descricao;
    this->cliente = cliente;
    this->esp = esp;    
}

Venda::~Venda(){}

void Venda::print(){
    
    std::cout << "Especialista: ";
    std::cout << esp.nome;

    std::cout << " Cliente: ";
    std::cout << cliente;

    std::cout << " Descricao: " << descricao << std::endl;
}



double Venda::getValor(){
    return this->valor;
}



