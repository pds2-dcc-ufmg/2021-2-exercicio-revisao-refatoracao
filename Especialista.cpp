#include "Especialista.hpp"
#include "Funcionario.hpp"
#include "Cliente.hpp"

#include <iomanip>
#include <iostream>

double Especialista::comissao(double valorVenda) {
	double valorComissao = valorVenda*percentualComissao;
	return valorComissao;
}


void Especialista::print() {

	std::cout << "[Especialista]" << std::endl;
	Funcionario::print();

        std::cout << "  Nome: " << nome << std::endl
        	  << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << salarioBase << std::endl;

}

std::string Especialista::getEspecialidade() {return(especialidade);}
void Especialista::setEspecialidade(std::string novaEspecialidade) {especialidade = novaEspecialidade;}
