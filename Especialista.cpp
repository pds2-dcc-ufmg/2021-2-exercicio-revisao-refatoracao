#include <iostream>
#include <iomanip>

#include "Especialista.hpp"

double Especialista::calculaComissao(double ValorVenda){

    return ValorVenda*PercentualPorVenda;

}

void Especialista::print(){

    std::cout << "[Especialista]" << std::endl;
    std::cout << "[Funcionario]" << std::endl;
    std::cout << "  Idade: " << this->Idade << std::endl;
    std::cout << "  RGFunc: " << this->RGFunc << std::endl;
    std::cout << "  Nome: " << this->Nome << std::endl;
    std::cout << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) 
              << this->SalarioBase << std::endl;
    std::cout << "Num Atendimentos: " << this->NumAtendimentos << std::endl;
    std::cout << "Salario Total: " << this->calculaSalarioTotal() << std::endl;

}

Especialista::Especialista(){}
        
Especialista::Especialista(std::string nome, int idade, int rgfunc,
                           double salariobase, std::string especialidade){

    this->Nome = nome;
    this->Idade = idade;
    this->RGFunc = rgfunc;
    this->SalarioBase = salariobase;
    this->Especialidade = especialidade;

}

void Especialista::setEspecialidade(std::string novaEspecialidade){

    this->Especialidade = novaEspecialidade;

}

std::string Especialista::getEspecialidade(){

    return this->Especialidade;

}

void Especialista::novoAtendimento(){

    this->NumAtendimentos++;

}
    
int Especialista::getNumAtendimentos(){

    return this->NumAtendimentos;

}

void Especialista::addComissao(double comissao){

    this->Comissao += comissao;

}

double Especialista::getComissao(){

    return this->Comissao;

}

double Especialista::calculaSalarioTotal(){

    return this->SalarioBase + this->Comissao;

}