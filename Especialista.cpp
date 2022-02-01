#include <iostream>
#include "Especialista.hpp"

double Especialista::comissao (double ValorVenda) {

    return ValorVenda * this->perc;
}

void Especialista::print() {

    std::cout << "[Especialista]" << std::endl;
    Funcionario::print();

}

Especialista::Especialista () {

}

Especialista::Especialista (std::string nome, 
                            int idade, 
                            std::string rgFunc, 
                            int salarioBase, 
                            std::string especialidade) {
    
    this->nome = nome;
    this->idade = idade;
    this->rgFunc = rgFunc; 
    this->salarioBase = salarioBase;
    this->especialidade = especialidade;
}

std::string Especialista::getEspecialidade () {
    return this->especialidade;
}

void Especialista::setEspecialidade (std::string especialidade) {
    this->especialidade = especialidade;
}