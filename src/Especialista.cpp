#include "Especialista.hpp"

void Especialista::setEspecialidade(std::string especialidade) {
    this->especialidade = especialidade;
}

double Especialista::comissao(double ValorVenda) {
    double c = ValorVenda * perc;
    return c;
}

void Especialista::print() {

    std::cout << "[Especialista]" << endl;
    Funcionario::print();

    std::cout << "  Nome: " << getNome() << endl
              << "  SalarioBase: R$ " << fixed << setprecision(2) << getSalarioBase() << endl;
}