#include "Funcionario.hpp"

Funcionario::Funcionario (std::string& nome, int idade, int rgFuncionario, double salarioBase) :
_nome(nome), _idade(idade), _rgFuncionario(rgFuncionario), _salarioBase(salarioBase) {}

virtual void Funcionario::imprimeDadosFuncionario() {
    std::cout << "[Funcionário]" << std::endl;
    std::cout << "Nome: " << _nome << std::endl;
    std::cout << "Idade: " << _idade << std::endl;
    std::cout << "RG: " << _rgFuncionario << std::endl;
    std::cout << "Salário: " << _salarioBase << std::endl;
}
