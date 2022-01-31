#include "Funcionario.hpp"

unsigned int Funcionario::Funcionario::NUMVENDAS = 0;

double Funcionario::Funcionario::VALORTOTAL = 0;

Funcionario::Funcionario::Funcionario(double salario, std::string idade, std::string nome, int rg){

    __salarioBase = salario;
    __idade = idade;
    __nome = nome;
    __rgFunc = rg;

}

void Funcionario::Funcionario::imprimeDados() const {
    
    std::cout << "[Funcionario]" << std::endl
    << "  Idade: " << __idade << std::endl
    << "  RGFunc: " << __rgFunc << std::endl;

}

std::string Funcionario::Funcionario::getNome(){
    return __nome;
}

double Funcionario::Funcionario::salarioTotal(){
    return __salarioBase;
}