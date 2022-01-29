#include "Gerente.hpp"

Gerente::Gerente(Funcionario *f, double bonificacao){
    this->mf = f;
    this->bonificacao = bonificacao;
}

Gerente::~Gerente(){}

void Gerente::print() {
    std::cout << "[Funcionario]" << std::endl
    << "[Gerente]" << std::endl
    << "  Nome: " << mf->nome << std::endl
    << "  Idade: " << mf->idade << std::endl
    << "  RGFunc: " << mf->rgFunc << std::endl
    << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << mf->salarioBase <<std::endl;
}

double Gerente::calculaSalario(){
    return salarioBase + bonificacao;
}

void Gerente::setBonificacao(double bonificacao_){
    this->bonificacao = bonificacao_;
}

double Gerente::calculaBonificacaoGerente(int numTotalVendas){

    return numTotalVendas*valorBonificacao;  
}   