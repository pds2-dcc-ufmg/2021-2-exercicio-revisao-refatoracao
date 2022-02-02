#include "Funcionario.hpp"

void Funcionario::print() {
            std::cout << "[Funcionario]" << std::endl
            << "  Idade: " << get_IDADE() << std::endl
            << "  RGFunc: " << get_rgFunc() << std::endl;
        }

        
void Funcionario::set_SalarioBase(double _SalarioBase){
    SalarioBase = _SalarioBase;
}

double Funcionario::get_SalarioBase(){
    return SalarioBase;
}
		
void Funcionario::set_IDADE(std::string _IDADE){
    IDADE = _IDADE;
}

std::string Funcionario::get_IDADE(){
    return IDADE;
}
		
void Funcionario::set_nome(std::string _nome){
    nome = _nome;
}

std::string Funcionario::get_nome(){
    return nome;
}
		
void Funcionario::set_rgFunc(int _rgFunc){
    rgFunc = _rgFunc;
}

int Funcionario::get_rgFunc(){
    return rgFunc;
}
