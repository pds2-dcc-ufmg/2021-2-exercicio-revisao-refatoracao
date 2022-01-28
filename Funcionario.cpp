#include <iostream>
#include <iomanip>
#include <string>

#include "Funcionario.hpp"

double Funcionario::GetSalarioBase()
{
    return salarioBase;
}

std::string Funcionario::GetIdade()
{
    return idade;
}

std::string Funcionario::GetNome()
{
    return nome;
}

int Funcionario::GetRGFuncionario()
{
    return rgFuncionario;
}

void Funcionario::SetSalarioBase(double valorMinimo)
{
    this -> salarioBase = valorMinimo;
}

void Funcionario::SetIdade(const std::string& _idade)
{
    this -> idade = _ idade;
}

void Funcionario::SetNome(const std::string& _nome)
{
    this -> nome = _nome;
}

void Funcionario::SetRGFuncionario(int RG)
{
    this -> rgFuncionario = RG;
}

void Funcionario::print()
{
    std::cout << "[Funcionario]" << std::endl
    <<" Idade: " << GetIdade() << std::endl
    <<" RGFunc: " << GetRGFuncionario() << std::endl;
}

void Funcionario::print_oi()
{
    std::cout << "Oi" << std::endl;
}

void Funcionario::print_tchau()
{
    std::cout<< "Tchau" << std::endl;
}
