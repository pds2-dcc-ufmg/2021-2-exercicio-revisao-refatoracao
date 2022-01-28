#include "Funcionario.hpp"

#include <iostream>
#include <string>

void Funcionario::setNome(std::string nome) {

	this->nome = nome;

}

void Funcionario::setRgFuncionario(int rgFuncionario) {

	this->rgFuncionario = rgFuncionario;

}

void Funcionario::setIdade(int idade) {

	this->idade = idade;

}

void Funcionario::setSalarioBase(double salarioBase) {

	this->salarioBase = salarioBase;

}

std::string Funcionario::getNome() {

	return this->nome;

}

int Funcionario::getRgFuncionario() {

	return this->rgFuncionario;

}

int Funcionario::getIdade() {

	return this->idade;

}

double Funcionario::getSalarioBase() {

	return this->salarioBase;

}