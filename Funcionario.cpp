#include <iostream>
#include <string>
#include "Funcionario.hpp"

void Funcionario::set_salario_base(double salario_base){
    this->salario_base = salario_base;
}

double Funcionario::get_salario_base(){
    return this->salario_base;
}

void Funcionario::set_nome(std::string nome){
    this->nome = nome;
}

std::string Funcionario::get_nome(){
    return this->nome;
}

void Funcionario::set_idade(std::string idade){
    this->idade = idade;
}

std::string Funcionario::get_idade(){
    return this->idade;
}

void Funcionario::set_rg_func(int rg_func){
    this->rg_func = rg_func;
}

int Funcionario::get_rg_func(){
    return this-> rg_func;
}