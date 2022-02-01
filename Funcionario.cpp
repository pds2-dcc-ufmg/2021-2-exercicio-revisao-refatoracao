#include "Funcionario.hpp"

std::string Funcionario::getNome(){
	return this->_nome;
}

int Funcionario::getIdade(){
	return this->_idade;
}

int Funcionario::getRgFunc(){
	return this->_rgFunc;
}

double Funcionario::getSalarioMin(){
	return this->_salarioMin;
}

void Funcionario::setNome(std::string nome){
	this->_nome = nome;
}

void Funcionario::setIdade(int idade){
	this->_idade = idade;
}

void Funcionario::setRgFunc(int rgFunc){
	this->_rgFunc = rgFunc;
}

void Funcionario::setSalarioMin(double salarioMin){
	this->_salarioMin = salarioMin;
}

void Funcionario::imprimeDadosFuncionario() {
    std::cout << "[Funcionario]" << std::endl
              << "  Idade: " << getIdade() << std::endl
              << "  RGFunc: " << getRgFunc() << std::endl;
}
