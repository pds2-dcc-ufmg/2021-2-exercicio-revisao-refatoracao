#include <iostream>
#include <string>
#include "Cliente.hpp"

Cliente::Cliente(const std::string& nome, const std::string& endereco, const std::string& cep)
: nome(nome), endereco(endereco), cep(cep) {}

std::string Cliente::getNome(){
    return nome;
}

std::string Cliente::getEndereco(){
    return endereco;
}

std::string Cliente::getCep(){
    return cep;
}

void Cliente::print(){
  std::cout << "[Cliente]" << endl
         << "  Nome: " << nome << endl
     << "  Endereco: " << endereco << endl
     << "  CEP: " << cep << endl
    << "\n";

}

