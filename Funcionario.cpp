#include "Funcionario.hpp"

void Funcionario::print() {
    cout << "[Funcionario]" << endl
         << "  Idade: " << idade << endl
         << "  RGFunc: " << rg << endl;
}

void Funcionario::setNome(string nome) { 
    this->nome = nome; 
}
void Funcionario::setIdade(int idade) { 
    this->idade = idade; 
}
void Funcionario::setRg(int rg) { 
    this->rg = rg; 
}
void Funcionario::setSalarioBase(double salario_base) { 
    this->salario_base = salario_base; 
}

string Funcionario::getNome() { 
    return this->nome; 
}
int Funcionario::getIdade() { 
    return this->idade; 
}
int Funcionario::getRg() { 
    return this->rg; 
}
double Funcionario::getSalarioBase() { 
    return this->salario_base; 
}
