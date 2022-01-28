#include "Gerente.hpp"

#include <iostream>
#include <string>

Gerente::Gerente(std::string nome, int rgFuncionario, int idade, double salarioBase, double bonificacao = 0, double valorBonificacao = 15.0) {

    this->nome = nome;
    this->rgFuncionario = rgFuncionario;
    this->idade = idade;
    this->salarioBase = salarioBase;
    this->bonificacao = bonificacao;
	this->valorBonificacao = valorBonificacao;

}

void Gerente::setBonificacao(double bonificacao) {

	this->bonificacao = bonificacao;

}

double Gerente::getBonificacao() {

	return this->bonificacao;

}

double Gerente::calcularBonificacao(int numTotalVendas) {

            return numTotalVendas*valorBonificacao;

}

void Gerente::print() const {

            std::cout << "[Funcionario]" << std::endl
            << "[Gerente]" << std::endl
            << "  Nome: " << this->nome << std::endl
            << "  Idade: " << this->idade << std::endl
            << "  RGFunc: " << this->rgFuncionario << std::endl
            << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << this->salarioBase << std::endl;
            
}
