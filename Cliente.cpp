#include <iostream>
#include <string>
#include "Cliente.hpp"

void Cliente::setNome(std::string nome){
   this->nome = nome;
}
void Cliente::setEndereco(std::string endereco){
   this->endereco = endereco;
}
void Cliente::setCep(std::string cep){
   this->cep = cep;
}

std::string Cliente::getNome(){
   return this->nome;
}

std::string Cliente::getEndereco(){
   return this->endereco;
}

std::string Cliente::getCep(){
   return this->cep;
}

void Cliente::print(){

	std::cout << "[Cliente]\n" << "Nome: " << getNome() << "\nEndereco: " << getEndereco() << "\nCEP: " << getCep() << std::endl << std::endl;

}