#include "Cuidador.hpp"

Cuidador::Cuidador() {}

Cuidador::Cuidador(std::string _nome, std::string _cpf, std::string _telefone, std::string _nascimento, std::string _salario){
	this->nome = _nome;
	this->cpf = _cpf;
	this->telefone = _telefone;
	this->nascimento = _nascimento;
	this->salario = _salario;
}

void Cuidador::print(){
	std::cout << "[Cuidador]" << std::endl;
	std::cout << "  Nome: " << this->nome << std::endl;
	std::cout << "  CPF: " << this->cpf << std::endl;
	std::cout << "  Telefone: " << this->telefone << std::endl;
	std::cout << "  Nascimento: " << this->nascimento << std::endl;
}

std::string Cuidador::getNome() {
	return this->nome;
}