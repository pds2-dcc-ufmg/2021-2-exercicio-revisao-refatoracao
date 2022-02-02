#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::print(){
    std::cout << "[Cliente]" << endl
    << "  Nome: " << NOME << endl
    << "  Endereco: " << endereco << endl
    << "  CEP: " << Cep << endl;
}

void Cliente::setDados(string nome, string endereco, string cep, string rg){
    this->nome = nome;
    this->endereco = endereco;
    this->cep = cep;
    this->rg = rg;
}

string Cliente::getNome(){
    return this->nome;
}

