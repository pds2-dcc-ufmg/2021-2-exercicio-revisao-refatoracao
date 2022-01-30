#include "Venda.hpp"

Venda::Venda(){};
Venda::Venda(Cliente cliente, Especialista *especialista, string descricao, double valor){
    this->valor = valor;
    this->descricao = descricao;
    this->especialista = especialista;
    this->cliente = cliente;
}

void Venda::print() {
    cout << "Especialista: ";
    cout << especialista->getNome();
    cout << " Cliente: ";
    cout << cliente.getNome();
}

double Venda::getValor(){
    return this->valor;
}
string Venda::getDescricao(){
    return this->descricao;
}
Especialista *Venda::getEspecialista(){
    return this->especialista;
}
Cliente Venda::getCliente(){
    return this->cliente;
}
double Venda::getComissao(){
    return this->comissao;
}
void Venda::setValor(double valor){
    this->valor = valor;
}
void Venda::setDescricao(string descricao){
    this->descricao = descricao;
}
void Venda::setEspecialista(Especialista* especialista){
    this->especialista = especialista;
}
void Venda::setCliente(Cliente cliente){
    this->cliente = cliente;
}
void Venda::setComissao(double comissao){
    this->comissao = comissao;
}