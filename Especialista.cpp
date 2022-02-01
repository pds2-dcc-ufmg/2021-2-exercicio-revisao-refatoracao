#include <iostream>
#include <string>
#include "Especialista.hpp"

void Especialista::setPerc(double perc){
   this->perc = perc;
}

void Especialista::setPercWanda(double percWanda){
   this->percWanda = percWanda;
}

double Especialista::getPerc(){
   return perc;
}

double Especialista::getPercWanda(){
   return percWanda;
}

double Especialista::comissao(double ValorVenda) {
    double c = ValorVenda*perc;
    return c;

}

void print() {

    std::cout << "[Especialista]" << std::endl;
    Funcionario::print();
}