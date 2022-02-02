#include <iostream>
#include "Especialista.hpp"

void Especialista::imprimir_dados()
{
    std::cout << "[Especialista]" << std::endl
    << "[Funcionario]" << std::endl
    << "  Idade: " << this->_idade << std::endl
    << "  RGFunc: " << this->_rg_func << std::endl
    << "  Nome: " << this->_nome << std::endl
    << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << _salario_base << std::endl
    << "Num Atendimentos: " << this->_num_atendimentos << std::endl
    << "Salario Total: " << this->_salario_total << std::endl;
}

void Especialista::calcular_comissao(double valor_venda)
{
    this->_comissao += valor_venda * PERCENTUAL_COMISSAO;
    this->calcular_salario_total();
}

void Especialista::calcular_salario_total()
{
    this->_salario_total = this->_salario_base + this->_comissao;
}
