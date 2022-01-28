#include "Especialista.hpp"

Especialista::Especialista(std::string nome, double salario_base, int idade, int rg_funcionario, std::string especialidade, double percentual) {
    this->_nome = nome;
    this->_salario_base = salario_base;
    this->_idade = idade;
    this->_rg_funcionario = rg_funcionario;
    this->_especialidade = especialidade;
    this->_percentual = percentual;
}

void Especialista::imprime_dados() const {
    std::cout << "[Especialista]" << std::endl
    << "[Funcionario]" << std::endl
    << "  Idade: " << this->_idade << std::endl
    << "  RGFunc: " << this->_rg_funcionario << std::endl
    << "  Nome: " << this->_nome << std::endl
    << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << this->_salario_base << std::endl
    << "  Num Atendimentos: " << this->_num_atendimentos << std::endl
    << "  Salario Total: " << std::fixed << std::setprecision(2) << this->_salario_base + this->_comissao << std::endl;
}

void Especialista::realiza_venda(double valor_venda) {
    calcula_comissao(valor_venda);

    this->_num_atendimentos++;
}

int Especialista::getNumAtendimentos() {
    return this->_num_atendimentos;
}

void Especialista::calcula_comissao(double valor_venda) {
    double valor_comissao = valor_venda * this->_percentual;
    
    this->_comissao += valor_comissao;
}