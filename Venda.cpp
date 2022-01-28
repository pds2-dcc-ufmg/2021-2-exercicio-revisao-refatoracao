#include <iostream>>

#include "Venda.hpp"

Venda::Venda(double valor, std::string descricao, Especialista* especialista, Cliente* cliente){

    this->_valor = valor;
    this->_descricao = descricao;
    this->_especialista = *especialista;
    this->_cliente = *cliente;
}

void Venda::print(){

    std::cout << "Especialista: " << this->_especialista.getNome() << std::endl
            << " Cliente: " << this->_cliente.getNome()
            << " Descrição: " << this->_descricao;
}            