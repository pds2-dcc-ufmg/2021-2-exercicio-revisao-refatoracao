#include <iostream>


#include "Funcionario.hpp"

using namespace std;

// Método que imprime as informaçoes do funcionario
void Funcionario::print(){

    cout << "[Funcionario]" << endl;
    cout << "  Idade: " << idade << endl;
    cout << "  RGFunc: " << rgFunc << endl;
}

// Método a ser sobreescrito
double Funcionario::salario_extra(double x){
    return 0;
}

// Método que retorna o salário base
double Funcionario::get_Salario_Base(){
    return SalarioBase;
}

// Método que define o salário base 
void Funcionario::set_Salario_Base(double salario_novo){
    SalarioBase+=salario_novo;
}

// Método a ser sobreescrito
double Funcionario::get_Salario_Total(){
    return 0;
}

// Método que imprime as informaçoes do gerente
void Gerente::print() {
    cout << "[Funcionario]" << endl;
    cout << "[Gerente]" << endl;
    cout<< "  Nome:  "<< nome <<endl;
    cout<< "  Idade: " <<idade << endl;
    cout<< "  RGFunc: " << rgFunc << endl;
    cout<< "  SalarioBase: R$ " << fixed << setprecision(2) << this->get_Salario_Base() <<endl;
}

// Método que calcula o salário extra do gerente
// Obs: A cada venda associada ao gerente ele recebe R$15,00
double Gerente::salario_extra(double numTOTALVendas){
    return numTOTALVendas*15;
}

// Método que calcula o salário total do gerente
// Obs> O salário total do gerente é o seu salário base + salário extra 
double Gerente::get_Salario_Total(){
    return get_Salario_Base()+bonificacao;
}

// Método que calcula o salário extra do especialista
// Obs: O especialista recebe como salário extra 10% do valor de cada venda que ele efetua
double Especialista::salario_extra(double ValorVenda){
    return ValorVenda*0.1;
}

// Método que atualiza o valor da bonificação
void Gerente::set_bonificacao(double bonus){
    bonificacao+=bonus;
}

// Método que imprime as características do especialista
void Especialista::print() {
        cout << "[Especialista]" << endl;
        Funcionario::print();
        cout << "  Nome: " << nome << endl
        << "  SalarioBase: R$ " << fixed << setprecision(2) <<this->get_Salario_Base() <<endl;
}

// Método que calcula o salário total
// Obs: O salário total é o salário base + comissao
double Especialista::get_Salario_Total(){
    return get_Salario_Base()+comissao;
}

// Método que atualiza o valor da comissao
void Especialista::set_comissao(double valor_comissao){
    comissao+=valor_comissao;
}