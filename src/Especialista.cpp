#include <iomanip>
#include <iostream>

#include "Especialista.hpp"


Especialista::Especialista(std::string nome, std::string idade, int rgFunc, double salarioBase, std::string especialidade){
    this->nome = nome;
    this->idade = idade;
    this->rgFunc = rgFunc;
    this->salarioBase = salarioBase;
    this->especialidade = especialidade;
}

double Especialista::comissao (double valorVenda) {
    return valorVenda*getPor100Comissao();
}

void Especialista::print() {

    std::cout << "[Especialista]" << std::endl;
    
    std::cout << "[Funcionario]" << std::endl
            << "  Idade: " << this->idade << std::endl
            << "  RGFunc: " << this->rgFunc << std::endl;

    std::cout << "  Nome: " << this->nome << std::endl
    << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) 
    << this->salarioBase <<std::endl;

}