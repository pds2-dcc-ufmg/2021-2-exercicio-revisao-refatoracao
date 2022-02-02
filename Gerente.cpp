#include "Gerente.hpp"

void Gerente::print() {
            std::cout << "[Funcionario]" << std::endl
            << "[Gerente]" << std::endl
            << "  Nome: " << get_nome() << std::endl
            << "  Idade: " << get_IDADE() << std::endl
            << "  RGFunc: " << get_rgFunc() << std::endl
            << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << get_SalarioBase() <<std::endl;
        }
        
double Gerente::calcula_BONIFICACAO_GERENTE(int Total_Vendas){
            return Total_Vendas*Valor_Bonificacao;
        }
        
void Gerente::set_SalarioBase(double _SalarioBase){
    SalarioBase = _SalarioBase;
}

double Gerente::get_SalarioBase(){
    return SalarioBase;
}
		
void Gerente::set_IDADE(std::string _IDADE){
    IDADE = _IDADE;
}

std::string Gerente::get_IDADE(){
    return IDADE;
}
		
void Gerente::set_nome(std::string _nome){
    nome = _nome;
}

std::string Gerente::get_nome(){
    return nome;
}
		
void Gerente::set_rgFunc(int _rgFunc){
    rgFunc = _rgFunc;
}

int Gerente::get_rgFunc(){
    return rgFunc;
}

void Gerente::set_bonificacao(double _bonificacao){
    bonificacao = _bonificacao;
}

double Gerente::get_bonificacao(){
    return bonificacao;
}
