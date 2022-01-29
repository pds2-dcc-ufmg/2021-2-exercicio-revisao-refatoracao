#include "Especialista.hpp"

Especialista::Especialista(Funcionario *f, std::string especialidade, int numAtendimentos){

    this->mf = f;
    this->especialidade = especialidade;
    this->numAtendimentos = numAtendimentos;

}

Especialista::Especialista(){
    
}

Especialista::~Especialista(){}

double Especialista::calculaComissao(double valorVenda){

    double comissao = valorVenda*perc;
    return comissao;

}

double Especialista::calculaSalario(){
    return salarioBase + comissao;
}

void Especialista::setComissao(int comissao_){
    this->comissao = comissao_;
}

double Especialista::getComissao(){
    return this->comissao;
}

void Especialista::setAtendimentos(int atendimentos_){
    this->numAtendimentos = atendimentos_;
}

int Especialista::getAtendimentos(){
    return this->numAtendimentos;
}

void Especialista::print(){
    std::cout << "[Especialista]" << std::endl;
    std::cout << "[Funcionario]" << std::endl
    << "  Idade: " << mf->idade << std::endl
    << "  RGFunc: " << mf->rgFunc << std::endl;
    std::cout << "  Nome: " << mf->nome << std::endl
    << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << mf->salarioBase << std::endl;
}