#include "Funcionario.hpp"

void Funcionario::print() {
    std::cout << "[Funcionario]" << std::endl
    << "  Idade: " << this->IDADE << std::endl
    << "  RGFunc: " << this->rgFunc << std::endl;
}

void Funcionario::print_oi(){
    std::cout << "Tchau" << std::endl;
}

std::string Funcionario::getNome(){
    return this -> nome;
}
std::string Funcionario::getIdade(){
    return this -> IDADE;
}
double Funcionario::getSalarioBase(){
    return this -> SalarioBase;
}
double Funcionario::getrg(){
    return this -> rgFunc;
}  
void Funcionario::setNome(std::string nome){
    this->nome = nome;
}
void Funcionario::setIdade(std::string Idade){
    this->IDADE = Idade;
}
void Funcionario::setSalarioBase(int SalarioBase){
    this->SalarioBase = SalarioBase;
}
void Funcionario::setrg(int rg){
    this->rgFunc = rg;
}
