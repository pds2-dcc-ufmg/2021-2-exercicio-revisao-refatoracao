#include "Venda.hpp"

using namespace std;

void Venda::setValor(double valor) {
    this->Valor = valor;
}
double Venda::getValor() {
    return this->Valor;
}

void Venda::setDescricao(string descricao) {
    this->Descricao = descricao;
}
string Venda::getDescricao() {
    return this->Descricao;
}

void Venda::setEspecialista(Especialista expert) {
    this->especialista = expert;
}
Especialista Venda::getEspecialista() {
    return this->especialista;
}

void Venda::setCliente(Cliente client) {
    this->cliente = client;
}
Cliente Venda::getCliente() {
    return this->cliente;
}

void Venda::print() {
    cout << "Especialista: " << especialista.getNome()
    << " Cliente: " << cliente.getNome()
    << " Descricao: " << Descricao << endl;
}
