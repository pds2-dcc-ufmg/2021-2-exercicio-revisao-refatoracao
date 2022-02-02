#include <iostream>
#include <string>
#include "Gerente.hpp"

Gerente::Gerente(std::string nome, std::string idade, int rg_func, double salario_base){
    this->set_nome(nome);
    this->set_idade(idade);
    this->set_rg_func(rg_func);
    this->set_salario_base(salario_base);
}

double Gerente::calcula_BONIFICACAO_GERENTE(int num_total_vendas){
            return num_total_vendas*(this->valor_bonificacao);
        }

void Gerente::set_bonificacao(double bonificacao){
    this->bonificacao = bonificacao;
}

double Gerente::get_bonificacao(){
    return this->bonificacao;
}

void Gerente::print(){
    std::cout << "[Funcionario]" << std::endl
            << "[Gerente]" << std::endl
            << "  Nome: " << this->get_nome() << std::endl
            << "  Idade: " << this->get_idade() << std::endl
            << "  RGFunc: " << this->get_rg_func() << std::endl
            << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << this->get_salario_base() << std::endl;
    }
