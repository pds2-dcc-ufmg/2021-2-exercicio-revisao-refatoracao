#include "Venda.hpp"


Venda::Venda(std::string descricao, double valor, Cliente cliente, Especialista especialista)
:_descricao(descricao), _valor(valor), _cliente(cliente), _especialista(especialista)
{}


void Venda::print()const 
{

    std::cout << "Especialista: ";
    cout << _especialista.get_nome();

    std::cout << " Cliente: ";
    cout << _cliente.get_nome();  
}

std::string Venda::get_descricao() const
{
    return this->_descricao;
}


double Venda::get_valor()const
{
    return this->_valor;
}