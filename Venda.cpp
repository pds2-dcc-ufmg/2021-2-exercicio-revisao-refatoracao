#include <iostream>
#include <string>
#include "Venda.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

Venda::Venda(Cliente cliente1, Especialista esp1, std::string descricao1, double valor1)
        : cliente(cliente1), esp(esp1), descricao(descricao1), valor(valor1) { }

void Venda::print()
{
    std::cout << "Especialista: " << esp.nome << std::endl
              << "Cliente: " << cliente.nome << std::endl
              << "Descricao: " << descricao << std::endl;
}
