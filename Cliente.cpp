#include <iostream>
#include "Cliente.hpp"

void Cliente::print(){

	std::cout << "[Cliente]" << std::endl
         << "  Nome: " << this->nome << std::endl
		 << "  Endereco: " << this->endereco << std::endl
		 << "  CEP: " << this->cep << std::endl;

}
std::string Cliente::getNome(){
	return this->nome;
}
std::string Cliente::getEndereco(){
	return this->endereco;
}
std::string Cliente::getCEP(){
	return this->cep;
}
void Cliente::setNome(std::string nome){
	this->nome = nome;
}
void Cliente::setEndereco(std::string endereco){
	this->endereco = endereco;
}
void Cliente::setCEP(std::string cep){
	this->cep = cep;
}

//Padronizam-se as variáveis conforme as Boas Práticas
//Aplicam-se os 'std' em cada 'endl'
//Aplica-se a palavra reservada 'this' para cada atributo
//Define-se os escopos de getters e setters (definição da funcionalidade dessas funções)
//Não há necessidade de se manter a biblioteca 'string' neste arquivo, 
//visto que o .cpp já inclui o .hpp, que por sua vez já possui a biblioteca string