#include <iostream>
#include <string>
#include "Venda.hpp"

Venda::Venda(Cliente *cliente, Especialista *esp, std::string descricao, double valor)
{
    this->cliente = cliente;
    this->esp = esp;
    this->descricao = descricao;
    this->valor = valor;
}

void Venda::print()
{
    std::cout << "Especialista: " << esp.nome << std::endl
              << "Cliente: " << cliente.nome << std::endl
              << "Descricao: " << descricao << std::endl;
}
