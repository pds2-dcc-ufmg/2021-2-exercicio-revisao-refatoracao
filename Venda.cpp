#include <iostream>
#include <string>
#include "Venda.hpp"

Venda::Venda(std::string cliente, class Especialista *esp, std::string descricao, double valor){
    this->set_valor(valor);
    this->set_descricao(descricao);
    this->set_esp(esp);
    this->set_cliente(cliente);
}

void Venda::set_valor(double valor){
    this->valor = valor;
}

double Venda::get_valor(){
    return this->valor;
}

void Venda::set_descricao(std::string descricao){
    this->descricao = descricao;
}

std::string Venda::get_descricao(){
    return this->descricao;
}

void Venda::set_esp(class Especialista *esp){
    this->esp = esp;
}

class Especialista* Venda::get_especialista(){
    return this->esp;
}

void Venda::set_cliente(std::string cliente){
    this->cliente = cliente;
}

std::string Venda::get_cliente(){
    return this->cliente;
}

void Venda::print(){
    std::cout << "Especialista: ";
    std::cout << this->esp->get_nome();
    std::cout << " Cliente: ";
    std::cout << this->get_cliente();
}
