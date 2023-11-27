#include <iostream>
#include <iomanip>

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"
#include "Gerente.hpp"

const double PERCENTUAL = 0.1;       // Constante referente ao percentual de venda padrão para comissões.
const double PERCENTUAL_WANDA = 0.1; // Constante referente ao percentual de venda que será usado na comissao da Wanda

Especialista::Especialista(std::string especialidade, const std::string nome, std::string idade, double SalarioBase, int RegistroFuncional, int NumeroDeAtendimentos, double Comissao)
{
    this->_nome = nome;
    this->_idade = idade;
    this->_SalarioBase = SalarioBase;
    this->_RegistroFuncional = RegistroFuncional;
    this->_NumeroDeAtendimentos = NumeroDeAtendimentos;
    this->_Comissao = Comissao;
    this->_especialidade = especialidade;
}

void Especialista::print()
{

    double TotalReceber = 0;
    std::cout << "[Especialista]" << std::endl;
    Funcionario::print();
    std::cout << "  Nome: " << getNome() << std::endl
              << "  SalarioBase: R$ "
              << std::fixed << std::setprecision(2)
              << getSalarioBase() << std::endl;

    if (this->getNome() == "Wanda Maximoff")
    {
        TotalReceber = getSalarioBase() + getComissao() * PERCENTUAL_WANDA;
    }
    else
    {
        TotalReceber = getSalarioBase() + getComissao() * PERCENTUAL;
    }

    std::cout << "Num Atendimentos: " << getNumeroDeAtendimentos() << std::endl;
    std::cout << "Salario Total: " << TotalReceber << std::endl;
}

std::string Especialista::getEspecialidade() { return _especialidade; }
