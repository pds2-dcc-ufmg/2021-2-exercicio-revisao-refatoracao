#include "Especialista.hpp"

    double Especialista::comissao(double ValorVenda) {
        double c = ValorVenda*Especialista::perc;
        return c;
    }

    void Especialista::print() {
        std::cout << "[Especialista]" << std::endl;
        Funcionario::print();

        std::cout << "  Nome: " << Especialista::nome << std::endl
        << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << Especialista::salario_base << std::endl;
    }