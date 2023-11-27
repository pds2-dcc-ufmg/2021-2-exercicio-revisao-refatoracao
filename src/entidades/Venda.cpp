#include "Venda.hpp"

void Venda::ImprimeVenda()
{

    std::cout << "Especialista: ";
    std::cout << this->especialista.getNome();

    std::cout << " Cliente: ";
    std::cout << this->cliente.getNome();
}

Venda::Venda(Especialista esp, Cliente c, const std::string &Descricao, double Valor)
{
    this->Descricao = Descricao;
    this->Valor = Valor;
    this->especialista = esp;
    this->cliente = c;
}