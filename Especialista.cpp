#include <iostream>
#include "Especialista.hpp"

double Especialista::comissao (double ValorVenda) {

    return ValorVenda * this->perc;
}

void Especialista::print() {

    std::cout << "[Especialista]" << std::endl;
    Funcionario::print();

}

Especialista::Especialista (std::string nome,
                            int idade,
                            int rgFunc,
                            int salarioBase,
                            std::string especialidade) {

    this->nome = nome;
    this->idade = idade;
    this->rgFunc = rgFunc;
    this->salarioBase = salarioBase;
    this->especialidade = especialidade;

}

Especialista::~Especialista () {
    delete this;
}

std::string Especialista::getEspecialidade () {
    return this->especialidade;
}