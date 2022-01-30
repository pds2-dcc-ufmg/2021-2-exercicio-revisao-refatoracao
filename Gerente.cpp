#include "Gerente.hpp"

Gerente::Gerente(){

}

Gerente::Gerente(string nome, int idade, int rg, double salario_base){
    this->nome = nome;
    this->idade = idade;
    this->rg = rg;
    this->salario_base = salario_base;
}

double Gerente::getBonificacao(){ return this->bonificacao; }
void Gerente::setBonificacao(double bonificacao){ this->bonificacao = bonificacao; }

void Gerente::print() {
    cout << "[Funcionario]" << endl
         << "[Gerente]" << endl
         << "  Nome: " << nome << endl
         << "  Idade: " << idade << endl
         << "  RGFunc: " << rg << endl
         << "  SalarioBase: R$ " << fixed << setprecision(2) << salario_base <<endl;
}

double Gerente::calcula_bonificacao(int num_total_vendas){
    return num_total_vendas*valor_bonificacao;
}