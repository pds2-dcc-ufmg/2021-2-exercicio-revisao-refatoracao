#include "Venda.hpp"


Venda::Venda(double Valor, string descricao, Especialista esp, string cliente){
    this->VALOR = Valor;
    this->descricao = descricao;
    this->esp = esp;
    this->cliente = cliente;
}

void Venda::print() {

    std::cout << "Especialista: ";
    cout << esp.nome;

    std::cout << " Cliente: ";
    cout << cliente;
}