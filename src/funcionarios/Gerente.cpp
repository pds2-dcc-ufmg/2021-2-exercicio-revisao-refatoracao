#include "Gerente.hpp"

Gerente::Gerente(std::string nome, std::string rgFuncionario, int idade, double salarioBase) {
    this->nome = nome;
    this->rgFuncionario = rgFuncionario;
    this->idade = idade;
    this->salarioBase = salarioBase;
    this->salarioFinal = salarioBase;
}

void Gerente::print()
{
    std::cout << "[Gerente]" << std::endl;
    Funcionario::print();
    std::cout << "  Salario Total: " << salarioFinal << std::endl;
}

void Gerente::calculaSalario(int numTotalVendas)
{
    salarioFinal += numTotalVendas * VALOR_BONIFICACAO;
}