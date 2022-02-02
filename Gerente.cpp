#include "Gerente.hpp"

Gerente::Gerente(std::string nome, std::string idade, int rg_func, double salario_base){
    this->nome = nome;
    this->idade = idade;
    this->rg_func = rg_func;
    this->salario_base = salario_base;
}

void Gerente::print() {
     std::cout << "[Funcionario]" << std::endl
               << "[Gerente]" << std::endl
               << "  Nome: " << nome << std::endl
               << "  Idade: " << idade << std::endl
               << "  RGFunc: " << rg_func << std::endl
               << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << salario_base << std::endl;
}

double Gerente::calcula_bonificacao_gerente(int num_total_vendas){
    return num_total_vendas * valor_bonificacao;
}