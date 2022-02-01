#include "Gerente.hpp"

double valorbonificado= 15.0;

void Gerente::print() {
    std::cout << "[Funcionario]" << std::endl;
    std::cout << "[Gerente]" << std::endl;
    std::cout << "  Nome: " << nome << std::endl;
    std::cout << "  Idade: " << IDADE << std::endl;
    std::cout << "  RGFunc: " << rgfunc << std::endl;
    std::cout << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << SalarioBase << std::endl;
}

double Gerente::calcula_Bonificacao_Gerente(int numtotalvendas) {
    return numtotalvendas * valorbonificado;
}




