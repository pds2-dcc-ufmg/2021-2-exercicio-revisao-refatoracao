#include "Venda.hpp"

Venda::Venda(Cliente cliente, Especialista *especialista, std::string descricao, double valor)
{
    this->_cliente = cliente;
    this->_especialista = *especialista;
    this->_descricao = descricao;
    this->_valor = valor;
    especialista->executarVenda(valor);
}

void Venda::imprimirDados() const
{

    std::cout << "Especialista: ";
    std::cout << _especialista.getNome();

    std::cout << " Cliente: ";
    std::cout << _cliente.getNome();

    std::cout << " Descricao: " << this->_descricao << std::endl;
}