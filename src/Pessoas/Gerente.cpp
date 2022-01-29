#include <iostream>
#include <string>
#include "../../include/Pessoas/Gerente.hpp"


double ValorBONIFICACAO = 15.0;



Gerente::Gerente(double salarioBase, string Idade, string nome, int rgFunc,double bonificacao){
    _IDADE = Idade;
    _SalarioBase = salarioBase;
    _nome = nome;
    _rgFunc = rgFunc;
    _bonificacao = bonificacao;
}
void Gerente::print() {
    cout << "[Funcionario]" << endl
    << "[Gerente]" << endl
    << "  Nome: " << _nome << endl
    << "  Idade: " << _IDADE << endl
    << "  RGFunc: " << _rgFunc << endl
    << "  SalarioBase: R$ " << fixed << setprecision(2) << _SalarioBase <<endl;
    cout << "Salario Total: " << calcularTotal()<<endl;

}
void Gerente::setBonificao(double novaBonificacao){
    _bonificacao = novaBonificacao;
}
double Gerente::getBonificacao(){
    return _bonificacao;
}
double Gerente::getSalarioBase(){
    return _SalarioBase;
}
double Gerente::calcularTotal(){
    return _SalarioBase + _bonificacao;
}
double Gerente::calcula_BONIFICACAO_GERENTE(int numTOTALVendas){
    double x;
    return numTOTALVendas*ValorBONIFICACAO;
}
