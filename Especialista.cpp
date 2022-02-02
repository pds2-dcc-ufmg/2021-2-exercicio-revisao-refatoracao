#include <iostream>
#include <string>
#include "Especialista.hpp"

void Especialista::Especialista(){
        this->perc = 0.1;
}
double Especialista::comissao(double valorVenda){
        double c = valorVenda*this->perc;
        return c;
}

double Especialista::getComissao(){
        return this->valorComissao;
}

void Especialista::setComissao(double valorComissaoNovo){
        this->valorComissao = valorComissaoNovo;
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
        std::cout << "  Especialidade: " << this->especialidade << endl;
}

