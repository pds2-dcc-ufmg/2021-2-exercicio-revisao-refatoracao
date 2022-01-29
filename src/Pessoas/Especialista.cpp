#include <iostream>
#include <string>
#include "../../include/Pessoas/Especialista.hpp"


double perc = 0.1;
double percWanda = 0.1;

Especialista::Especialista(double salarioBase,string Idade, string nome, int rgFunc,string especialidade){
    _IDADE = Idade;
    _SalarioBase = salarioBase;
    _nome = nome;
    _rgFunc = rgFunc;
    _especialidade = especialidade;  
}

double Especialista::comissao(double ValorVenda) {
    double c = ValorVenda*perc;
    return c;
}
double Especialista::getSalarioBase(){
    return _SalarioBase;
}
string Especialista::getNome(){
    return _nome;
}
void Especialista::adicionarComissao(double comissao){
    _comissao += comissao;
}
void Especialista::adicionarAtendimento(int numAtendimento){
    _numAtendimento += numAtendimento;
}
double Especialista::calcularTotal(){
    return _comissao+_SalarioBase;
}
int Especialista::getNumAtendimento(){
    return _numAtendimento;
}
void Especialista::print() {

    std::cout << "[Especialista]" << endl;
    Funcionario::print();

    std::cout << "  Nome: " << _nome << endl
    << "  SalarioBase: R$ " << fixed << setprecision(2) << _SalarioBase <<endl;

    std::cout << "Num Atendimentos: " << _numAtendimento << endl;

    std::cout << "Salario Total: " << calcularTotal()<<endl;
}