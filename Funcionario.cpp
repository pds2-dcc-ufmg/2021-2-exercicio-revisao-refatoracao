#include "Funcionario.hpp"

Funcionario::Funcionario(double SalarioBase,std::string idade,std::string nome, int rgFunc){
    this->SalarioBase=SalarioBase;
    this->IDADE=idade;
    this->nome=nome;
    this->rgFunc=rgFunc;
}

void Funcionario::print(){
     std::cout << "[Funcionario]" << std::endl
     << "  Idade: " << IDADE << std::endl
     << "  RGFunc: " << rgFunc << std::endl;
}
