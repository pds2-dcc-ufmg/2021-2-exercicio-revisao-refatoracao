#include "Funcionario.hpp"

void Funcionario::ImprimeDados() const
{
    std::cout << "[Funcionario]" << std::endl
              << "  Idade: " << this->getIdade() << std::endl
              << "  RGFunc: " << rgFunc << std::endl;
}

void Funcionario::setComissao(double Comissao) { this->Comissao = Comissao; }

double Funcionario::getComissao() const { return this->Comissao; }

void Funcionario::addComissao(double Comissao) { this->Comissao += Comissao; }

double Funcionario::getSalarioBase() const { return this->SalarioBase; }
