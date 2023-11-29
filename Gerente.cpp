#include "Gerente.hpp"
#include "Funcionario.hpp"

void Gerente::print()
{
    std::cout << "[Funcionario]" << std::endl
         << "[Gerente]" << std::endl 
         << "  Nome: " << this->get_nome() << std::endl
         << "  Idade: " << this->get_idade() << std::endl
         << "  RGFunc: " << this->get_rgFunc() << std::endl
         << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << this->get_salarioBase() << std::endl;
}

double Gerente::calcula_bonificacao_gerente(int numTotalVendas)
{
    return numTotalVendas * this->_bonificacao;
}

void Gerente::set_bonificacao(double bonificacao)
{
    this->_bonificacao = bonificacao;
}
double Gerente::get_bonificacao()
{
    return this->_bonificacao;
}
