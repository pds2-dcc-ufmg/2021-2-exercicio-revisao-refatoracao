#include <iostream>
#include <string>

#include "Especialista.hpp"
#include "Funcionario.hpp"

std::string Especialista::GetEspecialidade()
{
	return _especialidade;
}

double Especialista::GetPerc()
{
	return _perc;
}

double Especialista::GetComissao()
{
	return _comissao;
}

double Especialista::GetSalarioTotal()
{
	return _salarioTotal;
}

int Especialista::GetNumAtendimentos()
{
	return _numAtendimentos;
}

void Especialista::SetEspecialidade(const std::string& especialidade)
{
	this -> _especialidade = especialidade;
}

void Especialista::SetPerc(double perc)
{
	this -> _perc = perc;
}

void Especialista::SetComissao(double valorVenda)
{
	this -> _comissao = valorVenda * this -> _perc;
}

void Especialista::Inicializacao()
{
	this -> _numAtendimentos = 0;
	this -> _salarioTotal = this -> salarioBase;
}

void Especialista::NovoAtendimento()
{
	this -> _numAtendimentos++;
}

void Especialista::AcrescentaSalario()
{
	this -> _salarioTotal += this -> _comissao;
}

void Especialista:: print()
{
	std::cout << "[Especialista]" << std::endl
	<< " Especialidade: " << GetEspecialidade() << std::endl;
	Funcionario::print();
	std::cout << " Numero de Atendimentos: " << (int)GetNumAtendimentos() << std::endl
	<< " Salario Total: R$" << std::setprecision(2) << std::fixed << GetSalarioTotal() << std::endl;
}


