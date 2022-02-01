#include "Funcionario.hpp"

Funcionario::Funcionario(double Salario, std::string Idade,
         std::string Nome, int RgFuncionario) : SalarioBase(Salario), Idade(Idade), Nome(Nome), RgFuncionario(RgFuncionario),
         SalarioTotal(Salario) {}


void Funcionario::Print() const {
            std::cout << "[Funcionario]" << std::endl
            << "  Idade: " << Idade << std::endl
            << "  RGFunc: " << RgFuncionario << std::endl;
}
double Funcionario::getSalarioTotal() const {
            return this->SalarioTotal;
}
double Funcionario::getSalarioBase() const {
            return this->SalarioBase;
}
void Funcionario::setSalarioTotal(double ValorAdicionado){
    this->SalarioTotal+=ValorAdicionado;
}
std::string Funcionario::getIdade() const {
            return this->Idade;
}
std::string Funcionario::getNome() const {
            return this->Nome;
}
int Funcionario::getRgFuncionario() const {
            return this->RgFuncionario;
}
