#include <iostream>

#include "Gerente.hpp"

Gerente::Gerente(){}

Gerente::Gerente(std::string nome, int idade, int rgfunc, double salariobase){

    this->Nome = nome;
    this->Idade = idade;
    this->RGFunc = rgfunc;
    this->SalarioBase = salariobase;

}

double Gerente::calculaBonificacaoGerente(int numTotalVendas){

    return numTotalVendas*BonificacaoPorVenda;

}

double Gerente::calculaSalarioTotal(){

    return this->SalarioBase + this->Bonificacao;

}

void Gerente::print(){

    std::cout << "[Funcionario]" << std::endl;
    std::cout << "[Gerente]" << std::endl;
    std::cout << "  Nome: " << Nome << std::endl;
    std::cout << "  Idade: " << Idade << std::endl;
    std::cout << "  RGFunc: " << RGFunc << std::endl;
    std::cout << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) 
              << SalarioBase << std::endl;
    std::cout << "Salario Total: " << this->calculaSalarioTotal() << std::endl;

}

void Gerente::addBonificacao(double novo){

    this->Bonificacao += novo;

}

double Gerente::getBonificacao(){

    return this->Bonificacao;

}