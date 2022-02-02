#include <iostream>
#include <string>
#include <iomanip>

#include "Venda.hpp"

Venda::Venda()
{
}

Venda::Venda(double valor,
             std::string descricao,
             Especialista especialista,
             std::string cliente) : _especialista(especialista)
{
    this->_cliente = cliente;
    this->_descricao = descricao;
    this->_valor = valor;
}

void Venda::print()
{

    std::cout << "Especialista: ";
    std::cout << this->_especialista.getNome();

    std::cout << " Cliente: ";
    std::cout << _cliente;
}

double Venda::getValor()
{
    return this->_valor;
}
void Venda::setValor(double valor)
{
    this->_valor = valor;
}

Especialista Venda::getEspecialista()
{
    return this->_especialista;
}
void Venda::setEspecialista(Especialista especialista)
{
    this->_especialista = especialista;
}

std::string Venda::getDescricao()
{
    return this->_descricao;
}
void Venda::setDescricao(std::string descricao)
{
    this->_descricao = descricao;
}

std::string Venda::getCliente()
{
    return this->_cliente;
}
void Venda::setCliente(std::string cliente)
{
    this->_cliente = cliente;
}