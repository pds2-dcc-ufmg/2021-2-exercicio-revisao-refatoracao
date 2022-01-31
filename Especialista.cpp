#include "Especialista.hpp"

/*
Arquivo com as implementacoes dos metodos e funcoes da classe Especialista
*/

Especialista::Especialista(std::string nome, std::string idade, int rgFunc, double salarioBase, std::string especialidade) {
    this->_nome = nome;
    this->_idade = idade;
    this->_rgFunc = rgFunc;
    this->_salarioBase = salarioBase;
    this->_especialidade = especialidade;
}

int Especialista::getNumAtendimentos() {
    return this->_numAtedimentos;
}

void Especialista::novoAtendimento() {
    this->_numAtedimentos++;
}

void Especialista::calcularComissao(double ValorVenda){
    this->_comissaoAcumulada += ValorVenda * this->_percentual;
}

void Especialista::print() {
    std::cout << "[Especialista]" << std::endl;
    std::cout << "[Funcionario]" << std::endl;
    std::cout << "  Nome: " << this->_nome << std::endl;
    std::cout << "  Idade: " << this->_idade << std::endl;
    std::cout << "  RGFunc: " << this->_rgFunc << std::endl;
    std::cout << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << this->_salarioBase<< std::endl;
    std::cout << "  Num Atendimentos: " << this->_numAtedimentos << std::endl;
    std::cout << "  Salario Total: R$ " << this->_salarioBase + this->_comissaoAcumulada << std::endl;
}
