#include "Especialista.hpp"

double Especialista::calcula_comissao(double ValorVenda){
    double c = ValorVenda*perc;
    return c;
}

void Especialista::print(){
    std::cout << "[Funcionario]" << std::endl
    << "[Especialista]" << std::endl
    << "  Nome: " << _nome << std::endl
    << "  Idade: " << _idade << std::endl
    << "  RGFunc: " << _rgFunc << std::endl
    << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << _SalarioBase << std::endl
    << "  Num Atendimentos: " << _numVendas << std::endl
    << "  Salario Total: " << _SalarioBase + _comissao << std::endl;

}

Especialista::Especialista(std::string nome, int idade, int rgFunc, double salarioBase, std::string especialidade){
    this->_nome = nome;
    this->_idade = idade;
    this->_rgFunc = rgFunc;
    this->_SalarioBase = salarioBase;
    this->_especialidade = especialidade;
    
}

void Especialista::efetuar_venda(Venda venda){
    this->_comissao += calcula_comissao(venda._valor);
    this->_numVendas++;
}