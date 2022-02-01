#include "Venda.hpp"

Venda::Venda(double valor, string descricao, Especialista especialista, string cliente){
    this->valor = valor;
    this->descricao = descricao;
    this->especialista = especialista;
    this->cliente = cliente;
}

void Venda::printVenda() {
    cout << "Especialista: " << especialista.nome;
    cout << " Cliente: " << cliente;
} 