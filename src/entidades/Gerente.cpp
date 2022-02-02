#include <iostream>
#include "Gerente.hpp"

void Gerente::imprimir_dados(){
    std::cout << "[Funcionario]" << std::endl
    << "[Gerente]" << std::endl
    << "  Nome: " << this->_nome << std::endl
    << "  Idade: " << this->_idade << std::endl
    << "  RGFunc: " << this->_rg_func << std::endl
    << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << this->_salario_base << std::endl
    << "Salario Total: " << this->_salario_total << std::endl;
}

void Gerente::calcular_salario_total()
{
    this->_salario_total = this->_salario_base + this->_bonificacao;
}

void Gerente::calcular_bonificacao(int num_total_vendas)
{
    this->_bonificacao = num_total_vendas * VALOR_BONIFICACAO;
    this->calcular_salario_total();
}

