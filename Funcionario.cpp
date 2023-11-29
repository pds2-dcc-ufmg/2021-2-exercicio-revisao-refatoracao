#include "Funcionario.hpp"

Funcionario::Funcionario(std::string nome, std::string idade, double salario_base, int rg_func)
:_nome(nome), _idade(idade), _salario_base(salario_base), _rg_func(rg_func)
{}

void Funcionario::print() const {
            std::cout << "[Funcionario]" << std::endl;
            std::cout << "  Idade: " << _idade << std::endl;
            std::cout << "  RGFunc: " << _rg_func << std::endl;
        }

std::string Funcionario::get_nome() const
{
    return this->_nome;
}

double Funcionario::get_salario_base() const
{
    return this->_salario_base;
}