#include "Gerente.hpp"

void Gerente::print() {
    std::cout << "[Funcionario]" << std::endl
    << "[Gerente]" << std::endl
    << "  Nome: " << Gerente::nome << std::endl
    << "  Idade: " << Gerente::idade << std::endl
    << "  RGFunc: " << Gerente::rg_func << std::endl
    << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << Gerente::salario_base << std::endl;
}

double Gerente::calcula_BONIFICACAO_GERENTE(int num_total_vendas){
    double x;
    return num_total_vendas*ValorBONIFICACAO;
}