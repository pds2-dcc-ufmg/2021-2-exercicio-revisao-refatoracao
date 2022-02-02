#include "Funcionario.hpp"

Funcionario::Funcionario(std::string nome, int idade, std::string rg_func, double salario_base)
{
    this->_nome = nome;
    this->_idade = idade;
    this->_rg_func = rg_func;
    this->_salario_base = salario_base;
}
