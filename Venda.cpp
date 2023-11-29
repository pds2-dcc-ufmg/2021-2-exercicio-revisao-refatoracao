#include "Venda.hpp"

void Venda::print()
{
    std::cout << "Especialista: " << this->get_especialista().get_nome();
    std::cout << " Cliente: " << this->get_cliente();
}

void Venda::set_valor(double valor)
{
	this->_valor = valor;
}
void Venda::set_descricao(std::string descricao)
{
	this->_descricao = descricao;
}
void Venda::set_especialista(Especialista especialista)
{
	this->_especialista = especialista;
}
void Venda::set_cliente(std::string cliente)
{
	this->_cliente = cliente;
}
double Venda::get_valor()
{
	return this->_valor;
}
std::string Venda::get_descricao()
{
	return this->_descricao;
}
Especialista Venda::get_especialista()
{
	return this->_especialista;
}
std::string Venda::get_cliente()
{
	return this->_cliente;
}
