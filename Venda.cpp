#include "Venda.hpp"

/*
Arquivo com as implementacoes dos metodos e funcoes da classe Venda
*/

Venda::Venda(Cliente *cliente, Especialista *especialista, std::string descricao, double valor) {
    this->_cliente = cliente;
    this->_especialista = especialista;
    this->_descricao = descricao;
    this->_valor = valor;
}

void Venda::print() {
    std::cout << "Especialista: " << this->_especialista->getNome()<<std::endl;
    std::cout << " Cliente: " << this->_cliente->getNome()<<std::endl;
    std::cout << " Descricao: " << this->_descricao << std::endl;
}

double Venda::getValor(){
    return this->_valor;
}