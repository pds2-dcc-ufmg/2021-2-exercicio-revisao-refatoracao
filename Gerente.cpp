#include "Gerente.hpp"

void Gerente::print() {
    std::cout << "[Funcionario]" << std::endl;
    std::cout << "[Gerente]" << std::endl;
    std::cout << "  Nome: " << nome << std::endl;
    std::cout << "  Idade: " << idade << std::endl;
    std::cout << "  RGFunc: " << rg_funcionario << std::endl;
    std::cout << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << salario_base << std::endl;
}

double Gerente::calcula_BONIFICACAO_GERENTE(int numTOTALVendas){
    double x;
    return numTOTALVendas*(15.0);
}