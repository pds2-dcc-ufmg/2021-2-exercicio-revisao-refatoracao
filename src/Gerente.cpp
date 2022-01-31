#include "Gerente.hpp"

double Funcionario::Gerente::BONIFICACAO = 15;

void Funcionario::Gerente::imprimeDados() const{
    
    std::cout << "[Funcionario]" << std::endl
    << "[Gerente]" << std::endl
    << "  Nome: " << __nome << std::endl
    << "  Idade: " << __idade << std::endl
    << "  RGFunc: " << __rgFunc << std::endl
    << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << __salarioBase <<std::endl;

}

// double Funcionario::Gerente::calculaBonificacao(unsigned int  numTotalDeVendas);{
//     return numTotalDeVendas*BONIFICACAO;
// }

double Funcionario::Gerente::salarioTotal(){
    double bonificacao = BONIFICACAO*Funcionario::Funcionario::NUMVENDAS;
    return __salarioBase + bonificacao;
}