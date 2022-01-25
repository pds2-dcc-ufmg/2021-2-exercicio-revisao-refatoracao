#include "Especialista.hpp"
#include "Funcionario.hpp"
#include "Cliente.hpp"

double percentual = 0.1;

double Especialista::comissao(double valorVenda) {
    double valorComissao = valorVenda * percentual;
    return valorComissao;
};

void Especialista::print() const {

    std::cout << "[Especialista]" << std::endl;
    Funcionario::print();

    std::cout << "  Nome: " << this->nome << std::endl
    << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << this->salarioBase << std::endl;

};