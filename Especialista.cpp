#include <iostream>
#include <string>
#include "Especialista.hpp"


double Especialista::comissao(double valorVenda){
        double c = valorVenda*perc;
        return c;
}

string Especialista::getEspecialidade(){
        return this->especialidade;
}
void Especialista::setEspecialidade(string especialidadeNovo){
        this->especialidade = especialidadeNovo;
}

void Especialista::print() {
        std::cout << "[Especialista]" << endl;
                  Funcionario::print();
}

