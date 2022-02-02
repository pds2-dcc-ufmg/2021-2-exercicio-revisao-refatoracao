#include "Venda.hpp"

Venda::Venda(double valor, string descricao, Especialista esp, Cliente cl){
    this->valor = valor;
    this->descricao = descricao;
    this->esp = esp;
    this->cl = cl;
}

void Venda::print() const{
  cout << "Especialista: " << esp.nome << endl
  << " Cliente: " << cl.nome << endl
  << " Descricao: " << descricao << endl;
}
