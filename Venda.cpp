#include <iostream>
#include <string>
#include "Venda.hpp"

void Venda::setValor(double valor){
   this->valor = valor;
}

void Venda::setDescricao(std::string descricao){
   this->descricao = descricao;
}

void Venda::setCliente(std::string cliente){
   this->cliente = cliente;
}

double Venda::getValor(){
   return valor;
}

std::string Venda::getDescricao(){
   return descricao;
}

std::string Venda::getCliente(){
   return cliente;
}


void Venda::print() {

            std::cout << "Cliente: " << getCliente() << std::endl;
            std::cout << "Especialista: " << esp.getNome() << std::endl;
            std::cout << "Descricao: " << getDescricao() << std::endl;
            std::cout << "Valor: " << getValor() << std::endl;

}