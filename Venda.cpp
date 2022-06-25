#include <iostream>
#include <string>
#include <iomanip>

#include "Venda.hpp"

Venda::Venda(){}

Venda::Venda(double valor,
             string descricao,
             Especialista especialista,
             string cliente) : _especialista(especialista)
{
    this->_cliente = cliente;
    this->_descricao = descricao;
    this->_valor = valor;
}

void Venda::print()
{

    cout << "Especialista: ";
    cout << this->_especialista.getNome();

    cout << " Cliente: ";
    cout << _cliente;
}

double Venda::getValor()
{
    return _valor;
}
void Venda::setValor(double valor)
{
    this->_valor = valor;
}

Especialista Venda::getEspecialista()
{
    return _especialista;
}
void Venda::setEspecialista(Especialista especialista)
{
    this->_especialista = especialista;
}

string Venda::getDescricao()
{
    return _descricao;
}
void Venda::setDescricao(std::string descricao)
{
    this->_descricao = descricao;
}

string Venda::getCliente()
{
    return _cliente;
}
void Venda::setCliente(std::string cliente)
{
    this->_cliente = cliente;
}
