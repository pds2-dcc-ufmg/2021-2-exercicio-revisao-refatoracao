#include "Venda.hpp"

Venda::Venda(double valor,
             std::string descricao,
             std::string nomeEspecialista,
             std::string cliente)
{
    this->valor = valor;
    this->descricao = descricao;
    this->nomeEspecialista = nomeEspecialista;
    this->cliente = cliente;
}

void Venda::print()
{
    std::cout << "Especialista: " << nomeEspecialista << " Cliente: " << cliente << " Descricao: " << descricao << std::endl;
}

double Venda::getValor(){
    return this->valor;
}