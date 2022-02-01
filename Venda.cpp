#include<iostream>
#include<string>
#include "Venda.hpp"

void Venda::print() {

            std::cout << "Especialista: ";
            cout << especialista.getNome();

            std::cout << " Cliente: ";
            cout << cliente;
        }

double Venda::getValor(){
    return valor;
}

string Venda::getDescricao(){
    return descricao;
}

string Venda::getCliente(){
    return cliente;
}

Especialista Venda::getEspecialista(){
    return especialista;
}

void Venda::setValor(double _valor){
    this->valor = _valor;
}

void Venda::setDescricao(string _descricao){
    this->descricao = _descricao;
}

void Venda::setCliente(string _cliente){
    this->cliente = _cliente;
}

void Venda::setEspecialista(Especialista _especialista){
    this->especialista = _especialista;
}
