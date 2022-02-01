#include "Funcionario.hpp"
#include <iostream>
#include <string>

std::string Funcionario::get_Idade(){return this->idade;}
std::string Funcionario::get_Nome(){return this->nome;}
int Funcionario::get_Rg(){return this->rgFunc;}
double Funcionario::get_Salario(){return this->salarioBase;}


void Funcionario::print() {
    std::cout << "[Funcionario]" << std::endl
    << "  Idade:  " << get_Idade() << std::endl
    << "  RGFunc: " << get_Rg() << std::endl;
}