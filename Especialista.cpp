#include "Especialista.hpp"


double perc = 0.1;
double percWanda = 0.1;

double Especialista::comissao(double ValorVenda) {
    double c = ValorVenda*perc;

    return c;
}


void Especialista::print() {

    std::cout << "[Especialista]" << std::endl;
    Funcionario::print();



    std::cout << "  Nome: " << this->nome << std::endl
    << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << this->SalarioBase <<std::endl;

}

std::string Especialista::getEspecialidade(){
    return this -> especialidade;
}

void Especialista::setEspecialidade(std::string Especialidade){
    this -> especialidade = Especialidade;
}

