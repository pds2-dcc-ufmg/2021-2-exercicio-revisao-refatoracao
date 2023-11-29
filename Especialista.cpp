#include "Especialista.hpp"

double Especialista::comissao(double ValorVenda)
{
    double comissao = ValorVenda * percentual;
    return comissao;
}

void Especialista::print()
{

    std::cout << "[Especialista]" << std::endl;
    Funcionario::print();

    std::cout << "  Nome: " << this->get_nome() << std::endl
              << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << this->get_salarioBase() << std::endl;
}

void Especialista::set_especialidade(std::string especialidade)
{
    this->_especialidade = especialidade;
}
std::string Especialista::get_especialidade()
{
    return this->_especialidade;
}
