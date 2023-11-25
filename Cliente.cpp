#include "Cliente.hpp"
#include <iostream>

void Cliente::setNome(const std::string& nome) {
    this->nome = nome;
}

void Cliente::setEndereco(const std::string& endereco) {
    this->endereco = endereco;
}

void Cliente::setCep(const std::string& cep) {
    this->cep = cep;
}

void Cliente::print() const {
    std::cout << "Nome: " << nome << ", Endereco: " << endereco << ", CEP: " << cep << std::endl;
}
