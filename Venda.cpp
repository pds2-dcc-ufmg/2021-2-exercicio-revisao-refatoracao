#include "Venda.hpp"

Venda::Venda(double VALOR, string descricao, Especialista esp, Cliente cliente) {
    this->VALOR = VALOR;
    this->descricao = descricao;
    this->esp = esp;
    this->cliente = cliente;
}

void Venda::print() {

    std::cout << "Especialista: ";
    cout << esp.nome;

    std::cout << " Cliente: ";
    cout << cliente.NOME;

}
