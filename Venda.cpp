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

void Venda::setEsp(Especialista esp){
   this->esp = esp;
}

double Venda::getValor(){
   return this->valor;
}

std::string Venda::getDescricao(){
   return this->descricao;
}

std::string Venda::getCliente(){
   return this->cliente;
}
Especialista Venda::getEsp(){
   return this->esp;
}

void Venda::print() {

            std::cout << "Especialista: " << esp.getNome()
                      << "   Cliente: " << getCliente()
                      << "   Descricao: " << getDescricao() << std::endl;

}