#include "Gerente.hpp"
#include <iostream>

Gerente::Gerente(std::string nome, std::string idade, unsigned int rgFunc, unsigned int salarioBase){
    this->_nome = nome;
    this->_idade = idade;
    this->_rgFunc = rgFunc;
    this->_salarioBase = salarioBase;
}

void Gerente::print() const{ //Saida de dados na formatacao dos Gerentes

    std::cout << "[Funcionario]" << std::endl
              << "[Gerente]" << std::endl
              << "  Nome: " << this->_nome << std::endl
              << "  Idade: " << this->_idade << std::endl
              << "  RGFunc: " << this->_rgFunc << std::endl
              << "  SalarioBase: R$ " << float(this->_salarioBase) << std::endl
              << "Salario Total: R$ " << this->_salarioBase + this->_bonificacao << std::endl;
}

void Gerente::bonificacao(int numTotalServicos){
    this->_bonificacao += numTotalServicos * this->_valorBonificacao;
}