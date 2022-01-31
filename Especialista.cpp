#include "Especialista.hpp"
#include <iostream>
#include <string>

double Especialista::comissao(double ValorVenda) {
    double c = ValorVenda*perc;
        return c;
}
void Especialista::print() {

    std::cout << "[Especialista]" << endl;
    Funcionario::print();

    std::cout << "  Nome: " << get_Nome() << endl
    << "  SalarioBase: R$ " << fixed << setprecision(2) << get_Salario() <<endl;

}