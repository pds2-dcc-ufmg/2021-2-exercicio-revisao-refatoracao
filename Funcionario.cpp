#include "Funcionario.hpp"

#include <iostream>

void Funcionario::print() {
            std::cout << "[Funcionario]" << std::endl
            	      << "  Idade: " << idade << std::endl
                      << "  RGFunc: " << rgFunc << std::endl;
}

double Funcionario::getSalarioBase() {return(salarioBase);}
std::string Funcionario::getNome() {return(nome);}
std::string Funcionario::getIdade() {return(idade);}
int Funcionario::getRgFunc() {return(rgFunc);}

void Funcionario::setSalarioBase(double novoSalario) {salarioBase = novoSalario;}
void Funcionario::setNome(std::string novoNome) {nome = novoNome;}
void Funcionario::setIdade(std::string novaIdade) {idade = novaIdade;}
void Funcionario::setRgFunc(int novoRgFunc) {rgFunc = novoRgFunc;}
