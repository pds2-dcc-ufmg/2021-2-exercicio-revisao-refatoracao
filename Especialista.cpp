#include "Especialista.hpp"

Especialista::Especialista(){}
Especialista::Especialista(string nome, int idade, int rg, double salario_base, string especialidade){
    this->nome = nome;
    this->idade = idade;
    this->rg = rg;
    this->salario_base = salario_base;
    this->especialidade = especialidade;
    this->comissao_total = 0;
    this->num_atendimentos = 0;
}

void Especialista::calcula_comissao(double valor_venda) {
    this->comissao_total += (valor_venda*percentual_comissao);
}

double Especialista::getComissao(){
    return this->comissao_total;
}

int Especialista::getNumAtendimentos(){
    return this->num_atendimentos;
}

void Especialista::setNumAtendimentos(int num){
    this->num_atendimentos += num;
}

void Especialista::print() {
    cout << "[Especialista]" << endl;
    Funcionario::print();
    cout << "  Nome: " << nome << endl
         << "  SalarioBase: R$ " << fixed << setprecision(2) << salario_base <<endl;
}