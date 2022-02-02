#include "Gerente.hpp"

void Gerente::print(){
    std::cout << "[Funcionario]" << std::endl
    << "[Gerente]" << std::endl
    << "  Nome: " << _nome << std::endl
    << "  Idade: " << _idade << std::endl
    << "  RGFunc: " << _rgFunc << std::endl
    << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << _SalarioBase << std::endl
    << "  Salario Total: R$ " << _SalarioBase + bonificacao << std::endl;
}

void Gerente::calcula_bonificacao(int numVendas){
    this ->bonificacao = numVendas * valorBonificacao;
}

Gerente::Gerente(std::string nome, int idade, int rgFunc, double salarioBase){
    this->_nome = nome;
    this->_idade = idade;
    this->_rgFunc = rgFunc;
    this->_SalarioBase = salarioBase;
}