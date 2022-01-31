#include "Gerente.hpp"

Gerente::Gerente(double SalarioBase, std::string IDADE, std::string nome,int rgFunc,double bonificacao):
Funcionario(SalarioBase,IDADE,nome,rgFunc)
{
    this->bonificacao=bonificacao;
}

void Gerente::print() {
            std::cout << "[Funcionario]" << std::endl
            << "[Gerente]" << std::endl
            << "  Nome: " << nome << std::endl
            << "  Idade: " << IDADE << std::endl
            << "  RGFunc: " << rgFunc << std::endl
            << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << SalarioBase <<std::endl;
}
double Gerente::calcula_BONIFICACAO_GERENTE(int numTOTALVendas){

            return numTOTALVendas*ValorBONIFICACAO;
}

void Gerente::ImpSalarioTotal(){

    std::cout << "Salario Total: " << this->SalarioBase + this->bonificacao<<std::endl;
}
