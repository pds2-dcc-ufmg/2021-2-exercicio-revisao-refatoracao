#include <iostream>
#include <string>
#include "Especialista.hpp"
#include "Funcionario.hpp"
#include "Cliente.hpp"

double perc = 0.1;

double Especialista::comissao(double ValorVenda){
    double ValorComissao = ValorVenda*perc;
        return ValorComissao;
}

void Especialista::print(){
    std::cout << "[Especialista]" << endl;
        Funcionario::print();

        std::cout << "  Nome: " << nome << endl
        << "  SalarioBase: R$ " << fixed << setprecision(2) << SalarioBase <<endl;
}