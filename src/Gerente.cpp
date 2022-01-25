#include "Gerente.hpp"

Gerente::Gerente(std::string nome, std::string idade, std::string rgFunc, double salario_base)
:   Funcionario(nome, idade, rgFunc, salario_base)
{    
}

void Gerente::print() {
    std::cout << "[Gerente]" << std::endl;
    Funcionario::print();
}

double Gerente::calculaBonificacaoTotal(int total_vendas) {
    return total_vendas * this->VALOR_BONUS_POR_VENDA;
}

double Gerente::calculaSalarioTotal(int total_vendas) {
    return this->salario_base + calculaBonificacaoTotal(total_vendas);
}

double Gerente::getBonificacao() {
    return this->VALOR_BONUS_POR_VENDA;
}