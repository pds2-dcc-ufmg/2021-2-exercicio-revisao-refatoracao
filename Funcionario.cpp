#include "Funcionario.hpp"

void Funcionario::print() {
    cout << "[Funcionario]" << endl
         << "  Idade: " << idade << endl
         << "  RGFunc: " << rgFunc << endl;
}
void Funcionario::print_oi() {
    cout << "Tchau" << endl;
}
double Funcionario::get_SalarioBase(){
    return SalarioBase;
}
void Funcionario::set_SalarioBase(double salario){
    SalarioBase = salario;
}
string Funcionario::get_idade(){
    return idade;
}
void Funcionario::set_idade(string age){
    idade = age;
}
string Funcionario::get_nome(){
    return nome;
}
void Funcionario::set_nome(string name){
    nome = name;
}
int Funcionario::get_rgFunc(){
    return rgFunc;
}
void Funcionario::set_rgFunc(int rg){
    rgFunc = rg;
}
