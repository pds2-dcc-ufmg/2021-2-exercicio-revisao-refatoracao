#include "Venda.hpp"
#include <iostream>

Venda::Venda(Cliente& cliente,Especialista& esp, std::string descricao, double valor){
    this->_cliente = cliente._nome;
    this->_esp = esp._nome;
    this->_descricao = descricao;
    this->_valor = valor;

    
}

void Venda::print(){
    
    std::cout << "Especialista: " << this->_esp << " Cliente: " << this->_cliente << " Descricao: " << this->_descricao << std::endl;
}