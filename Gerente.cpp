#include "Gerente.hpp"

double valorbonificacao = 15.0;

void Gerente::print() {
    std::cout << "[Funcionario]" << std::endl;
    std::cout << "[Gerente]" << std::endl;
    std::cout << "  Nome: " << this->nome << std::endl;
    std::cout << "  Idade: " << this->idade << std::endl;
    std::cout << "  RGFunc: " << this->rgfunc << std::endl;
    std::cout << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << this->salariobase << std::endl;
}

double Gerente::calculabonificacaogerente(int numtotalvendas) {
    return numtotalvendas * valorbonificacao;
}