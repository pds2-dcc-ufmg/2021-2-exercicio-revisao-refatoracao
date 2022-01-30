#include "Especialista.hpp"
const double PERCENTUAL_COMISSAO = 0.1;

Especialista::Especialista(std::string nome, int idade, std::string RG, int salario, std::string especialidade)
{
    this->_nome = nome;
    this->_idade = idade;
    this->_RG = RG;
    this->_salarioBase = salario;
    this->_especialidade = especialidade;
    this->_numAtendimentos = 0;
}

void Especialista::imprimirDados() const
{

    std::cout << "[Especialista]" << std::endl;
    Funcionario::imprimirDados();

    std::cout << "  Nome: " << this->_nome << std::endl
              << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << this->_salarioBase << std::endl;

    std::cout << "Num Atendimentos: " << this->_numAtendimentos << std::endl;
    std::cout << "Salario Total: " << this->_salarioBase + this->_comissao << std::endl;
}

void Especialista::executarVenda(double valorVenda)
{
    this->_comissao += valorVenda * PERCENTUAL_COMISSAO;
    this->_numAtendimentos++;
}

int Especialista::getNumAtendimentos() const
{
    return this->_numAtendimentos;
}
