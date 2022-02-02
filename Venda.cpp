#include "Venda.hpp"
#include "Especialista.hpp"

Venda::Venda (std::string Cliente, Especialista* esp, std::string Descricao, double Valor) {
    this->Cliente = Cliente;
    this->esp = esp;
    this->Descricao = Descricao;
    this->Valor = Valor;
}

void Venda::Print() {
        std::cout << "Especialista: " << esp->get_Nome();
        std::cout << " Cliente: " << get_Cliente();
    }

std::string Venda::get_Cliente() {
    return Cliente;
}

std::string Venda::get_Descricao() {
    return Descricao;
}

double Venda::get_Valor() {
    return Valor;
}



