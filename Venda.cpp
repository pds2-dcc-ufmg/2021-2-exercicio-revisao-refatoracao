#include "Venda.hpp"

#include<iostream>
#include<string>

using namespace std;

Venda::Venda(Cliente *cliente, Especialista *especialista, string descricao, double valor) {
    this->_cliente = cliente;
    this->_especialista = especialista;
    this->_descricao = descricao;
    this->_valor = valor;
}

void Venda::print() {
    cout << "[Venda]" << endl;
    cout << " Especialista: " << this->_especialista->get_nome()<<endl;
    cout << " Cliente: " << this->_cliente->get_nome() <<endl;
    cout << " Descricao: " << this->_descricao << endl;
}

double Venda::get_valor(){
    return this->_valor;
}
