#include "Gerente.hpp"

#include <iomanip>
#include <iostream>

void Gerente::print() {
            std::cout << "[Funcionario]" << std::endl
           	      << "[Gerente]" << std::endl
            	      << "  Nome: " << nome << std::endl
           	      << "  Idade: " << idade << std::endl
            	      << "  RGFunc: " << rgFunc << std::endl
            	      << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << salarioBase << std::endl;
}

double Gerente::calculaBonificacaoGerente(int numVendas){
            return numVendas*valorBonificacao;
}

double Gerente::getSalarioBase() {return(salarioBase);}
std::string Gerente::getNome() {return(nome);}
std::string Gerente::getIdade() {return(idade);}
int Gerente::getRgFunc() {return(rgFunc);}
double Gerente::getBonificacao() {return(bonificacao);}

void Gerente::setSalarioBase(double novoSalario) {salarioBase = novoSalario;}
void Gerente::setNome(std::string novoNome) {nome = novoNome;}
void Gerente::setIdade(std::string novaIdade) {idade = novaIdade;}
void Gerente::setRgFunc(int novoRgFunc) {rgFunc = novoRgFunc;}
void Gerente::setBonificacao(double novaBonificacao) {bonificacao = novaBonificacao};
