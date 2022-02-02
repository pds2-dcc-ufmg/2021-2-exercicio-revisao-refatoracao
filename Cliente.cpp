#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){
    std::cout << "[Cliente]" << endl
    << "  Nome: " << NOME << endl
    << "  Endereco: " << endereco << endl
    << "  CEP: " << Cep << endl;
}

void Cliente::setDados(string nome, string endereco, string cep){
    this->nome = nome;
    this->endereco = endereco;
    this->cep = cep;
}

string Cliente::getNome(){
    return this->nome;
}

