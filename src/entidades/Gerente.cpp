#include "Gerente.hpp"

Gerente::Gerente(std::string nome, double salario_base, int idade, int rg_funcionario) {
    this->_nome = nome;
    this->_salario_base = salario_base;
    this->_idade = idade;
    this->_rg_funcionario = rg_funcionario;
}

void Gerente::imprime_dados() const {
    std::cout << "[Funcionario]" << std::endl
    << "[Gerente]" << std::endl
    << "  Nome: " << this->_nome << std::endl
    << "  Idade: " << this->_idade << std::endl
    << "  RGFunc: " << this->_rg_funcionario << std::endl
    << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << this->_salario_base << std::endl
    << "  Salario Total: " << std::fixed << std::setprecision(2) << this->_salario_base + this->_valor_bonificacao << std::endl;
}

void Gerente::calcula_bonificacao(int total_vendas) {
    this->_valor_bonificacao = total_vendas * _BONIFICACAO;
}