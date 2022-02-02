#include "Gerente.hpp"

Gerente::Gerente (double SalarioBase, string Idade, string Nome, int RG_Func, double bonificacao):Funcionario(SalarioBase, Idade, Nome, RG_Func, bonificacao){
    bonificacao=bonificacao;
}
void Gerente::print(){
    cout << "[Funcionario]" << std::endl;
    cout << "[Gerente]" << std::endl;

    cout << "  Nome: " << Nome << std::endl;
    cout << "  Idade: " << Idade << std::endl;
    cout << "  RGFunc: " << Func << std::endl;
    cout << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << SalarioBase <<std::endl;
}

double Gerente::CalcBonificacaoGerente(int NumTotalVendas){
    return NumTotalVendas*ValorBonificacao;
}

void Gerente::PrintSalarioTotal(){
    double SB = this->SalarioBase;
    double b = this->bonificacao;
    
    std::cout << "Salario Total: " << SB + b <<std::endl;
}