#include "Funcionario.hpp"

Funcionario::Funcionario(double Salario, std::string Idade,
         std::string Nome, int RgFuncionario) : SalarioBase(Salario), Idade(Idade), Nome(Nome), RgFuncionario(RgFuncionario) {}


void Funcionario::Print() {
            std::cout << "[Funcionario]" << std::endl
            << "  Idade: " << Idade << std::endl
            << "  RGFunc: " << RgFuncionario << std::endl;
        }
void Funcionario::print_oi(){
            std::cout << "Tchau" << std::endl;
        }
double Funcionario::getSalarioBase(){
            return this->SalarioBase;
}
void Funcionario::setSalarioBase(double ValorAdicionado){
    this->SalarioBase+=ValorAdicionado;
}
std::string Funcionario::getIdade(){
            return this->Idade;
}
std::string Funcionario::getNome(){
            return this->Nome;
}
int Funcionario::getRgFuncionario(){
            return this->RgFuncionario;
}
