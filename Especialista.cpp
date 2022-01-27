#include "Especialista.hpp"
#include <iostream>

Especialista::Especialista(std::string nome, std::string idade, unsigned int rgFunc, unsigned int salarioBase, std::string especialidade){
    this->_nome = nome;
    this->_idade = idade;
    this->_rgFunc = rgFunc;
    this->_salarioBase = salarioBase;
    this->_especialidade = especialidade;
}

void Especialista::comissao(double valorVenda){ //Incrementa o valor da comissao e em seguida soma-se um ao numero de atendimentos
    this->_comissao += valorVenda*this->_perc;
    this->_numAtendimentos += 1;
}

void Especialista::print() const{ //Saida de dados na formatacao dos Especialistas
    std::cout << "[Especialista]" << std::endl
              << "[Funcionario]" << std::endl
              << "  Idade: " << this->_idade << std::endl
              << "  RGFunc: " << this->_rgFunc << std::endl
              << "   Nome:  " << this->_nome << std::endl
              << "  SalarioBase: R$ "  << float(this->_salarioBase) << std::endl
              << "Num Atendimentos: " << this->_numAtendimentos << std::endl
              << "Salario Total: " << this->_salarioBase + this->_comissao << std::endl;
}