#include "Especialista.hpp"

double Especialista::comissao(double ValorVenda) {
    double c = ValorVenda*perc;
    return c;
}

void Especialista::print() {
        std::cout << "[Especialista]" << endl;
        Funcionario::print();

        std::cout << "  Nome: " << nome << endl
        << "  SalarioBase: R$ " << fixed << setprecision(2) << SalarioBase <<endl;

    }