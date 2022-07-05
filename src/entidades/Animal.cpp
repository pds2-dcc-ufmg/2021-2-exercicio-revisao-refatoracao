#include "Animal.hpp"

Animal::Animal() {}

Animal::Animal(std::string _idade, std::string _familia, std::string _nome) {
    this->idade = _idade;
    this->familia = _familia;
    this->nome = _nome;
}

void Animal::setIdade(std::string _idade){
    this->idade = _idade;
}

void Animal::setFamilia(std::string _familia){
    this->familia = _familia;
}

void Animal::setNome(std::string _nome){
    this->nome = _nome;
}

std::string Animal::getNome() {
    return this->nome;
}

void Animal::print(){
    std::cout << "\n[Animal]" << std::endl;
    std::cout << "  Nome: " << this->nome << std::endl;
    std::cout << "  Idade: " << this->idade << std::endl;
    std::cout << "  Familia: " << this->familia << std::endl;
}

void Animal::print_oi(){
    std::cout << "Tchau" << std::endl;
}