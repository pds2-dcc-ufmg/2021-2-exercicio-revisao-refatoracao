#include "Venda.hpp"

Venda::Venda()
{}

Venda::Venda(double valor, std::string descricao, Especialista* especialista, Cliente* cliente) :
        valor(valor), descricao(descricao), especialista(especialista), cliente(cliente)
{
    this->especialista->adicionaComissao(this->valor);
    this->especialista->adicionaAtendimento();
}

void Venda::imprimeDados()
{
    std::cout << "Especialista: ";
    std::cout << especialista->getNome();
    std::cout << " Cliente: ";
    std::cout << cliente->getNome();
    std::cout << " Descricao: " << descricao << std::endl;
}