#include "Venda.hpp"

Venda::Venda(Cliente clienteAux,
             Especialista especialistaAux,
             std::string descricaoAux,
             double valorAux)
{
    cliente = clienteAux;
    especialista = especialistaAux;
    descricao = descricaoAux;
    valor = valorAux;
}

void Venda::imprimirDados()
{
    std::cout << "Especialista: ";
    std::cout << especialista.getNome();
    std::cout << " Cliente: ";
    std::cout << cliente.getNome();
}