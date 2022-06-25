#include "Especialista.hpp"

double perc = 0.1;
double Especialista::comissao(double ValorVenda) {
         return ValorVenda*perc;
    }
void Especialista::print() {

        std::cout << "[Especialista]" << endl;
        Funcionario::print();
        std::cout << "  Nome: " << nome << endl
        << "  SalarioBase: R$ " << fixed << setprecision(2) << SalarioBase <<endl;

    }