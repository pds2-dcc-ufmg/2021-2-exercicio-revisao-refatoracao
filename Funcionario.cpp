#include "Funcionario.hpp"
//Implementação dos Metodos de Set da Classe Cliente
void Funcionario::SetSalarioBase(double SalarioBase){
    this->SalarioBase =  SalarioBase;
}
void Funcionario::SetIdade(int Idade){
    this->Idade = Idade;
}

//Implementação dos Metodos de Set da Classe Cliente
double Funcionario::GetSalarioBase(){
    return SalarioBase;
}
int Funcionario::GetIdade(){
    return Idade;
}
//Metodo Imprimi os dados dos Funcionarios
void Funcionario::Print() {
    cout << "[Funcionario]" << endl
    << "  Idade: " << GetIdade() << endl
    << "  RGFunc: " << GetRg() << endl
    << "  Nome: " << GetNome() << endl
    << "  SalarioBase: R$ " << fixed << setprecision(2) << GetSalarioBase() <<endl;
 }