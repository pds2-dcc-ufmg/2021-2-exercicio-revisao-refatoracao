#include <iostream>

#include "Especialista.hpp"

	double percentual_comissao = 0.1;

	double Especialista::comissao(double ValorVenda) {
        	return ValorVenda * percentual_comissao;                 
    }


	void Especialista::print() {

        std::cout << "[Especialista]" << std::endl;
        Funcionario::print();
        std::cout << "  Nome: " << nome << std::endl
        << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << SalarioBase << std::endl;

    }