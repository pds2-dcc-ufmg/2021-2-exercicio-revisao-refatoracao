#include "Funcionario.hpp"

Funcionario::Funcionario(std::string nome, std::string idade, std::string rgFunc, double salario_base)
:   salario_base(salario_base), idade(idade), nome(nome), rgFunc(rgFunc) 
{

}

void Funcionario::print() {
    std::cout << "[Funcionario]" << std::endl;
    std::cout << "  Nome: " << this->nome << std::endl;
    std::cout << "  Idade: " << this->idade << std::endl;
    std::cout << "  RGFunc: " << this->rgFunc << std::endl;
    std::cout << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << this->salario_base << std::endl;
}

double Funcionario::getSalarioBase() {
    return this->salario_base;
}
std::string Funcionario::getIdade() {
    return this->idade;
}
std::string Funcionario::getNome() {
    return this->nome;
}
std::string Funcionario::getRgFunc() {
    return this->rgFunc;
}