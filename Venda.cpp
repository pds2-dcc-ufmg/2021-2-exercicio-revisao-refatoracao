#include <iostream>
#include <string>
#include "Venda.hpp"

using namespace std;

Venda::Venda(double valor, string descricao, Especialista &especialista, Cliente cliente)
{
    this->valor = valor;
    this->descricao = descricao;
    this->especialista = especialista;
    this->cliente = cliente;
    especialista.setComissao(valor);
    especialista.setNumeroAtendimentos();
}

void Venda::print()
{
    std::cout << "[Venda]" << endl
              << "  Especialista: " << this->especialista.getNome() << endl
              << "  Cliente: " << this->cliente.getNome() << endl
              << "  Descricao: " << this->descricao << endl;
}

Especialista Venda::getEspecialista()
{
    return this->especialista;
}
