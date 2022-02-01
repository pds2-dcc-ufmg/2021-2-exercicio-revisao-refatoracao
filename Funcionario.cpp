#include "Funcionario.hpp"
//Implementação dos Metodos de Set da Classe Cliente
void Funcionario::SetSalarioBase(double SalarioBase){
    this->SalarioBase =  SalarioBase;
}
void Funcionario::SetIdade(int Idade){
    this->Idade = Idade;
}
void Funcionario::SetNome(string Nome){
    this->Nome = Nome;
}
void Funcionario::SetRgFuncionario(int RgFuncionario){
    this->RgFuncionario = RgFuncionario;
}
//Implementação dos Metodos de Set da Classe Cliente
double Funcionario::GetSalarioBase(){
    return SalarioBase;
}
int Funcionario::GetIdade(){
    return Idade;
}
string Funcionario::GetNome(){
    return Nome;
} 
int Funcionario::GetRgFuncionario(){
    return RgFuncionario;
}
//Metodo Imprimi os dados dos Funcionarios
void Funcionario::Print() {
    cout << "[Funcionario]" << endl
    << "  Idade: " << GetIdade() << endl
    << "  RGFunc: " << GetRgFuncionario() << endl
    << "  Nome: " << GetNome() << endl
    << "  SalarioBase: R$ " << fixed << setprecision(2) << GetSalarioBase() <<endl;
 }