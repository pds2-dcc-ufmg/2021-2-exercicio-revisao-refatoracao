
#include <iostream>
#include <string>
#include "Cliente.hpp"


Cliente::Cliente(
    std::string nome,
    std::string endereco,
    std::string cep)
    :
    nome(std::move(nome)),
    endereco(std::move(endereco)),
    cep(std::move(cep)) {}

void Cliente::print() const {
    std::cout << "[Cliente]\n";
    std::cout << "  Nome: " << this->nome << '\n';
    std::cout << "  Endereco: " << this->endereco << '\n';
    std::cout << "  CEP: " << this->cep << '\n';
}

const std::string &Cliente::get_nome() const {
    return this->nome;
}
