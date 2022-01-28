#include <iostream>
#include <iomanip>
#include <string>

#include "Funcionario.hpp"

double Funcionario::GetSalarioBase()
{
<<<<<<< HEAD
	return salarioBase;
=======
    return salarioBase;
>>>>>>> e0fac57a8e834c8b58f46fce22d21d3e546bfbd8
}

std::string Funcionario::GetIdade()
{
<<<<<<< HEAD
	return idade;
=======
    return idade;
>>>>>>> e0fac57a8e834c8b58f46fce22d21d3e546bfbd8
}

std::string Funcionario::GetNome()
{
<<<<<<< HEAD
	return nome;
=======
    return nome;
>>>>>>> e0fac57a8e834c8b58f46fce22d21d3e546bfbd8
}

int Funcionario::GetRGFuncionario()
{
<<<<<<< HEAD
	return rgFuncionario;
=======
    return rgFuncionario;
>>>>>>> e0fac57a8e834c8b58f46fce22d21d3e546bfbd8
}

void Funcionario::SetSalarioBase(double valorMinimo)
{
<<<<<<< HEAD
	this -> salarioBase = valorMinimo;
=======
    this -> salarioBase = valorMinimo;
>>>>>>> e0fac57a8e834c8b58f46fce22d21d3e546bfbd8
}

void Funcionario::SetIdade(const std::string& _idade)
{
<<<<<<< HEAD
	this -> idade = _idade;
=======
    this -> idade = _ idade;
>>>>>>> e0fac57a8e834c8b58f46fce22d21d3e546bfbd8
}

void Funcionario::SetNome(const std::string& _nome)
{
<<<<<<< HEAD
	this -> nome = _nome;
=======
    this -> nome = _nome;
>>>>>>> e0fac57a8e834c8b58f46fce22d21d3e546bfbd8
}

void Funcionario::SetRGFuncionario(int RG)
{
<<<<<<< HEAD
	this -> rgFuncionario = RG;
}

void Funcionario::print()
{	//Aqui, como ja se tem os atributos nome e salario base, é mais vantajoso ja os imprimir aqui
	std::cout << "[Funcionario] << std::endl
	<< " Nome: " << GetNome() << std::endl;
	<< " Idade: " << GetIdade() << std::endl
	<< " RGFunc: " << GetRGFuncionario() << std::endl
	<< " Salario Base: R$" << std::setprecision(2) << std::fixed << GetSalarioBase();
=======
    this -> rgFuncionario = RG;
}

void Funcionario::print()
{
    std::cout << "[Funcionario]" << std::endl
    <<" Idade: " << GetIdade() << std::endl
    <<" RGFunc: " << GetRGFuncionario() << std::endl;
>>>>>>> e0fac57a8e834c8b58f46fce22d21d3e546bfbd8
}

void Funcionario::print_oi()
{
<<<<<<< HEAD
	std::cout << "Oi" << std::endl;
=======
    std::cout << "Oi" << std::endl;
>>>>>>> e0fac57a8e834c8b58f46fce22d21d3e546bfbd8
}

void Funcionario::print_tchau()
{
<<<<<<< HEAD
	std::cout << "Tchau" << std::endl;
=======
    std::cout<< "Tchau" << std::endl;
>>>>>>> e0fac57a8e834c8b58f46fce22d21d3e546bfbd8
}
