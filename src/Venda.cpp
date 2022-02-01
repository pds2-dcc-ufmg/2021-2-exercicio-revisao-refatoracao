#include "Venda.hpp"
#include <iostream>

Venda::Venda::Venda(double valor, std::string descricao, Funcionario::Especialista* especialista, Cliente::Cliente* cliente){

    __valor = valor;
    __descricao = descricao;
    __especialista = especialista;
    __cliente = cliente;

}

void Venda::Venda::efetuaVenda(){

    Funcionario::Funcionario::VALORTOTAL += __valor;
    Funcionario::Funcionario::NUMVENDAS++;
    __especialista->recebeComissao(__valor);

}

void Venda::Venda::imprimeDados(){

    std::cout << "Especialista: " << __especialista->getNome()
    << " Cliente: " << __cliente->getNome()
    << " Descricao: " << this->__descricao << std::endl;

}

double Venda::Venda::getValor(){
    return __valor;
}

std::string Venda::Venda::getDescricao(){
    return __descricao;
}