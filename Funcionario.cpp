#include <iostream>
#include <string>
#include "Funcionario.hpp"

void Funcionario::print() {
    
    cout << "[Funcionario]" << endl
    << "  Idade: " << idade << endl
    << "  RGFunc: " << rgFunc << endl;

}

void Funcionario::print_tchau(){

    cout << "Tchau" << endl;

}

double Funcionario::getSalarioBase() {

	return salarioBase;

}

string Funcionario::getNome() {

	return nome;

}

string Funcionario::getIdade() {

	return idade;

}

int Funcionario::getRG() {

	return rgFunc;

}

void Funcionario::setSalarioBase(double salarioBase) {

    this->salarioBase = salarioBase;

}

void Funcionario::setIdade(string idade) {

    this->idade = idade;

}

void Funcionario::setNome(string nome) {

    this->nome = nome;

}

void Funcionario::setRG(int rg) {

    this->rgFunc = rg;

}

Funcionario::Funcionario(double salarioBase, string idade, string nome, int rgFunc){

    this->salarioBase = salarioBase;
    this->idade = idade;
    this->nome = nome;
    this->rgFunc = rgFunc;

}