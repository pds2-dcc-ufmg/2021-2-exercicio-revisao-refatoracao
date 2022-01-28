#include "Gerente.hpp"

Gerente::Gerente (std::string nome, int idade, int rgFunc, int salarioBase){

    this->_nome = nome;
    this->_idade = idade;
    this->_rgFunc = rgFunc;
    this->_salarioBase = salarioBase;
}

void Gerente::print(){

     std::cout << "[Funcionario]" << std::endl
                << "[Gerente]" << std::endl
                << "  Nome: " << _nome << std::endl
                << "  Idade: " << _idade << std::endl
                << "  RGFunc: " << this->_rgFunc << std::endl
                << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << _salarioBase << std::endl
                << "Salario Total: R$ " << this->_salarioBase + this->_bonificacao << std::endl;
}
double Gerente::calculaBonificacaoGerente(int numTotalVendas){

    return numTotalVendas*this->_valorBonificacao;
}

void Gerente::setBonificacao(double bonificacao){

    this->_bonificacao = bonificacao;
}