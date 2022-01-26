#include "Venda.hpp"

void Venda::print() {

    std::cout << "Especialista: ";
    cout << especialista.getNome();

    std::cout << " Cliente: ";
    cout << cliente;
}

double Venda::getValor() {
    return this->VALOR;
}

std::string Venda::getDescricao() {
    return this->descricao;
}

void Venda::setEspecialista(Especialista especialista) {
    this->especialista = especialista;
}

void Venda::setCliente(std::string cliente) {
    this->cliente = cliente;
}

void Venda::setDescricao(std::string descricao) {
    this->descricao = descricao;
}

void Venda::setValor(double valor) {
    this->VALOR = valor;
}