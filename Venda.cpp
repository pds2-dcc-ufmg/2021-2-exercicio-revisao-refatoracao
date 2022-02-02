#include "Venda.hpp"

void Venda::print(){
    std::cout << "Especialista: " << especialista.getNome()
    << " Cliente: " << cliente.getNome()
    << " Descricao: " << descricao << endl;
}

void Venda::setDados(double valor, string descricao, Especialista especialista, Cliente cliente){
    this->valor = valor;
    this->descricao = descricao;
    this->especialista = especialista;
    this->cliente = cliente;
};

double Venda::getValor(){
    return this->valor;
}
string Venda::getDescricao(){
    return this->descricao;
}
Especialista Venda::getEspecialista(){
    return this->especialista;
}
Cliente Venda::getCliente(){
    return this->cliente;
}
