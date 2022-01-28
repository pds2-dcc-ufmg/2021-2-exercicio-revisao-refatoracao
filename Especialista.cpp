#include "Especialista.hpp"
#include <iostream>

Especialista::Especialista(std::string nome, int idade, unsigned int rgFunc, double salarioBase, std::string especialidade){
    this->_nome = nome;
    this->_idade = idade;
    this->_rgFunc = rgFunc;
    this->_salarioBase = salarioBase;
    this->_especialidade = especialidade;
}

double Especialista::comissao(double ValorVenda){

    return ValorVenda*_porcentagemPorVenda;
}
void Especialista::print(){

    std::cout << "[Especialista]" << std::endl
              << "[Funcionario]" << std::endl
              << "Idade: " << this->_idade << std::endl
              << "RGFunc: " << this->_rgFunc << std::endl
              << "Nome: " << this->_nome << std::endl
              << "SalarioBase: R$ " << std::fixed << this->_salarioBase << std::endl
              << "Num Atendimentos: " << this->_NumAtendimentos << std::endl
              << "Salario Total: " << this->_salarioBase + this->_comissao << std::endl;
}
std::string Especialista::getNome(){

    return this->_nome;
}