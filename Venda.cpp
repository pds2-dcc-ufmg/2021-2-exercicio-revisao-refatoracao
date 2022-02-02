#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"

void Venda::setDescricao(std::string){
    this-> descricao = descricao;
}

std::string Venda::getdescricao(){
    return this-> descricao;
}

void Venda::setCliente(std::string){
    this-> cliente = cliente;
}

std::string Venda::getCliente(){
    return this-> cliente;
}

void Venda::setvalor(double){
    this-> valor = valor;
}

double Venda::setvalor(){
    return this-> valor;
}

void Venda::print() {

    std::cout << "Especialista: ";
    std::cout << esp.nome;
    std::cout << " Cliente: ";
    std::cout << cliente;
    
}