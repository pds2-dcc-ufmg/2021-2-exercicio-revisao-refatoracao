#include <iostream>
#include <string>
#include "Especialista.hpp"

double perc = 0.1;

void Especialista::setEspecialidade(std::string especialidade){
   this->especialidade = especialidade;
}

std::string Especialista::getEspecialidade(){
   return this->especialidade;
}

double Especialista::comissao(double ValorVenda) {
    double c = ValorVenda*perc;
    return c;

}

void Especialista::print() {

    std::cout << "[Especialista]" << std::endl;
    Funcionario::printFunc();

}