//Blibliotecas
#include "Funcionario.hpp"
//Implementação dos Metodo Set para Salario Base
void Funcionario::SetSalarioBase(double SalarioBase){
    this->SalarioBase =  SalarioBase;
}
//Implementação dos Metodos de Get para Salario Base
double Funcionario::GetSalarioBase(){
    return SalarioBase;
}
//Metodo Imprimi os dados dos Funcionarios
void Funcionario::Print() {
    cout << "[Funcionario]" << endl
    << "  Idade: " << GetIdade() << endl
    << "  RGFunc: " << GetRg() << endl
    << "  Nome: " << GetNome() << endl
    << "  SalarioBase: R$ " << fixed << setprecision(2) << GetSalarioBase() <<endl;
 }