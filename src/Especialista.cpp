#include <iostream>

#include "Especialista.hpp"

	double percentualComissao = 0.1;

	double Especialista::comissao(double valorVenda) {
        	return valorVenda * percentualComissao;                 
    }


	void Especialista::print() {

        std::cout << "[Especialista]" << std::endl;
        Funcionario::print();
        std::cout << "  Nome: " << nome << std::endl
        << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << salarioBase << std::endl;

    }
