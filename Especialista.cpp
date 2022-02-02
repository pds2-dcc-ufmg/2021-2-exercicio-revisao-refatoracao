#include <iostream>
#include <string>
#include "Especialista.hpp"

Especialista::Especialista(std::string nome, std::string idade, int rg_func, double salario_base, std::string especialidade){
    this->set_nome(nome);
    this->set_idade(idade);
    this->set_rg_func(rg_func);
    this->set_salario_base(salario_base);
    this->set_especialidade(especialidade);
}

double Especialista::comissao(double valor_venda) {
    double c = valor_venda*perc;
    return c;
}

void Especialista::set_especialidade(std::string especialidade){
    this->especialidade = especialidade;
}

std::string Especialista::get_especialidade(){
    return this-> especialidade;
}

void Especialista::print(){
    std::cout << "[Especialista]" << std::endl
            << "[Funcionario]" << std::endl
            << "  Nome: " << this->get_nome() << std::endl
            << "  Idade: " << this->get_idade() << std::endl
            << "  RGFunc: " << this->get_rg_func() << std::endl
            << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << this->get_salario_base() << std::endl;
    }

