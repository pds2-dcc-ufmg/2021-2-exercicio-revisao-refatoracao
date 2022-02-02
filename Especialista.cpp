#include "Especialista.hpp"
#include <iostream>
#include <iomanip>

Especialista::Especialista(std::string nome, std::string idade, int rg_func, double salario_base, std::string especialidade){
        this->nome = nome;
        this->idade = idade;
        this->rg_func = rg_func;
        this->salario_base = salario_base;
        this->especialidade = especialidade;
} 

Especialista::Especialista(){
        this->nome = " ";
        this->idade = " ";
        this->rg_func = 0;
        this->salario_base = 0;
        this->especialidade = " ";
}

double Especialista::comissao(double valor_venda) {
        return valor_venda * percentual;
}

void Especialista::print() {
        std::cout << "[Especialista]" << std::endl;
        Funcionario::print();
        std::cout << "  Nome: " << nome << std::endl
                  << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) 
                  << salario_base << std::endl;

}