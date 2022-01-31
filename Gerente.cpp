#include "Gerente.hpp"

#include<iostream>
#include<string>

Gerente::Gerente(string nome, string idade, int rg_func, double salario_base){
    this->_nome = nome;
    this->_idade = idade;
    this->_rg_func = rg_func;
    this->_salario_base = salario_base;
}

void Gerente::calcular_bonificacao_gerente(int total_vendas) {
    _bonificacao_acumulada += _valor_bonificacao*total_vendas;
}

void Gerente::print() {
    cout << "[Gerente]" << endl;
    cout << "  Nome: " << _nome << endl;
    cout << "  Idade: " << _idade<< endl;
    cout << "  RGFunc: " << _rgFunc << endl;
    cout << "  SalarioBase: R$ " << fixed << setprecision(2) << _salarioBase << endl;
    cout << "  Salario Total: R$ " << this->_salario_base + this->_bonificacao_acumulada << endl;
}
