#include "Venda.hpp"

void Venda::print()
{
    std::cout << "[Venda]" << std::endl;

    std::cout << "  Descricao: "
              << descricao << std::endl;

    std::cout << "  Especialista: "
              << especialista->getName() << std::endl;

    std::cout << "  Cliente: "
              << cliente << std::endl;
}

Venda::Venda(double valor, std::string descricao, Especialista *especialista, std::string cliente)
{
    this->valor = valor;
    this->descricao = descricao;
    this->especialista = especialista;
    this->cliente = cliente;

    especialista->realizaAtendimento(valor);
}