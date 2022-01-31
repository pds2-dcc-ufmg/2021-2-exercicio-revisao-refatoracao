#include <iostream>
#include <string>
#include "Cliente.hpp"

using namespace std;

void Cliente::setNome(string nome) {
    this->Nome = nome;
}
string Cliente::getNome() {
    return this->Nome;
}

void Cliente::setEndereco(string endereco) {
    this->Endereco = endereco;
}
string Cliente::getEndereco() {
    return this->Endereco;
}

void Cliente::setCep(string cep) {
    this->Cep = cep;
}
string Cliente::getCep() {
    return this->Cep;
}

void Cliente::print() {
	cout << "[Cliente]" << endl
         << "  Nome: " << Nome << endl
		 << "  Endereco: " << Endereco << endl
		 << "  CEP: " << Cep << endl;

}
