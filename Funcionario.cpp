#include "Funcionario.hpp"

void Funcionario::Print() {
    std::cout << "[Funcionario]" << std::endl
        << "  Idade: " << get_Idade() << std::endl
        << "  RG: " << get_RG() << std::endl;
}

std::string Funcionario::get_Idade() {
    return Idade;
}

std::string Funcionario::get_Nome() {
    return Nome;
}

int Funcionario::get_RG() {
    return RG;
}

double Funcionario::get_SalarioBase() {
    return SalarioBase;
}