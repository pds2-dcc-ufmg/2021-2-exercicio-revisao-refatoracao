#include <iostream>
#include <string>
#include "Especialista.hpp"

Especialista::Especialista(string nome, int idade, int rg, double salarioBase, string especialidade): Funcionario(nome, idade, rg, salarioBase){
    _especialidade = especialidade;
}

double Especialista::calcula_comissao(double valorVenda){
    double c = valorVenda*perc;
    return c;
}

void Especialista::print() {
    cout << "[Especialista]" << endl;
    Funcionario::print();
    cout << " Comissão: " << calcula_comissao << endl;
}

string Especialista::getNome(){
    Funcionario::getNome;
}

double Especialista::getSalario(){
    Funcionario::getSalario;
}