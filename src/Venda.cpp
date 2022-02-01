#include "Venda.hpp"

void Venda::print()
{
    std::cout << "Especialista: ";
    std::cout << especialista->getName();

    std::cout << " Cliente: ";
    std::cout << cliente;

    std::cout << " Descricao: " << descricao << std::endl;
}

Venda::Venda(double valor, std::string descricao, Especialista *especialista, std::string cliente)
{
    this->valor = valor;
    this->descricao = descricao;
    this->especialista = especialista;
    this->cliente = cliente;

    especialista->realizaAtendimento(valor);
}