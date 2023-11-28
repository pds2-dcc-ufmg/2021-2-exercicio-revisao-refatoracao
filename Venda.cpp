#include "Venda.hpp"

void Venda::print() {

    std::cout << "Especialista: ";
    cout << esp.get_nome();

    std::cout << " Cliente: ";
    cout << cliente;

}

double Venda::get_valor() {
    return valor;
}

void Venda::set_valor(double novo_valor) {
    valor = novo_valor;
}

string Venda::get_descricao() {
    return descricao;
}

void Venda::set_descricao(string nova_descricao) {
    descricao = nova_descricao;
}
Especialista Venda::get_esp() {
    return esp;
}

void Venda::set_esp(Especialista novo_especialista) {
    esp = novo_especialista;
}

string Venda::get_cliente() {
    return cliente;
}

void Venda::set_cliente(string novo_cliente) {
    cliente = novo_cliente;
}