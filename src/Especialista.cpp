#include "Especialista.hpp"

#include <iostream>
#include <string>

Especialista::Especialista(std::string nome, int rgFuncionario, int idade, double salarioBase, std::string especialidade, double percentual, int numAtendimentos, double comissaoTotal) {

    this->nome = nome;
    this->rgFuncionario = rgFuncionario;
    this->idade = idade;
    this->salarioBase = salarioBase;
    this->especialidade = especialidade;
    this->percentual = percentual;
    this->numAtendimentos = numAtendimentos;
    this->comissaoTotal = comissaoTotal;

}

void Especialista::setPercentual(double percentual) {

	this->percentual = percentual;

}

void Especialista::setEspecialidade(std::string especialidade) {

	this->especialidade = especialidade;

}

double Especialista::getPercentual() {

	return this->percentual;

}

std::string Especialista::getEspecialidade() {

	return this->especialidade;

}

int Especialista::getNumAtendimentos() {

	return this->numAtendimentos;

}

void Especialista::calcularComissao(double ValorVenda) {

    this->comissaoTotal += ValorVenda*percentual;
    this->numAtendimentos++;

}

void Especialista::print() const {

    std::cout << "[Especialista]" << std::endl;
    std::cout << "[Funcionario]" << std::endl
            << "  Idade: " << this->idade << std::endl
            << "  RGFunc: " << this->rgFuncionario << std::endl;

    std::cout << "  Nome: " << this->nome << std::endl
    << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << this->salarioBase << std::endl;

    std::cout << "Num Atendimentos: " << this->numAtendimentos << std::endl;
    std::cout << "Salario Total: " << this->salarioBase + this->comissaoTotal << std::endl;

}