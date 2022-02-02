#include "Gerente.hpp"

double Gerente::ValorBONIFICACAO = 15.0;


Gerente::Gerente (std::string Nome, std::string Idade, int RG, double SalarioBase, double Bonificacao) {
    this->SalarioBase = SalarioBase;
    this->Idade = Idade;
    this->Nome = Nome;
    this->RG = RG;
    this->Bonificacao = Bonificacao;
}

void Gerente::Print() {
    std::cout << "[Funcionario]" << std::endl
    << "[Gerente]" << std::endl
    << "  Nome: " << Nome << std::endl
    << "  Idade: " << Idade << std::endl
    << "  RGFunc: " << RG << std::endl
    << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << SalarioBase << std::endl;
}

double Gerente::calcula_BONIFICACAO_GERENTE(int numTOTALVendas){
    return numTOTALVendas*ValorBONIFICACAO;
}

double Gerente::get_SalarioBase(){
    return SalarioBase;
}

 double Gerente::get_Bonificacao() {
     return Bonificacao;
 }

void Gerente::set_Bonificacao(double Bonificacao) {
    this->Bonificacao = Bonificacao;
}
