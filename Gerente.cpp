#include "Gerente.hpp"

/*
Arquivo com as implementacoes dos metodos e funcoes da classe Gerente
*/

Gerente::Gerente(std::string nome, std::string idade, int rgFunc, double salariobase){
    this->_nome = nome;
    this->_idade = idade;
    this->_rgFunc = rgFunc;
    this->_salarioBase = salariobase;
}

void Gerente::calculaBonificacaoGerente(int numTotalVendas) {
    _bonificacaoAcumulada += _valorBonificacao*numTotalVendas;
}

void Gerente::print() {
    std::cout << "[Gerente]" << std::endl;
    std::cout << "  Nome: " << _nome << std::endl;
    std::cout << "  Idade: " << _idade<< std::endl;
    std::cout << "  RGFunc: " << _rgFunc << std::endl;
    std::cout << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << _salarioBase << std::endl;
    std::cout << "  Salario Total: R$ " << this->_salarioBase + this->_bonificacaoAcumulada << std::endl;
} 