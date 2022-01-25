#include "Funcionario.hpp"

Funcionario::Funcionario(std::string nome, std::string idade, std::string rgFunc, double salario_base)
:   salario_base(salario_base), idade(idade), nome(nome), rgFunc(rgFunc) 
{

}

void Funcionario::print() {
    std::cout << "[Funcionario]" << std::endl;
    std::cout << "\tNome: " << this->nome << std::endl;
    std::cout << "\tIdade: " << this->idade << std::endl;
    std::cout << "\tRGFunc: " << this->rgFunc << std::endl;
    std::cout << "\tSalario base: " << this->salario_base << std::endl;

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