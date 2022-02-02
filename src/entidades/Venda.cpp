#include "Venda.hpp"

Venda::Venda(std::string cliente, Especialista* esp, std::string descricao, double valor)
{
    this->_cliente = cliente;
    this->_esp = esp;
    this->_descricao = descricao;
    this->_valor = valor;

    this->_esp->calcular_comissao(this->_valor);
    this->_esp->_num_atendimentos++;
}

void Venda::imprimir_dados()
{
    std::cout << "Especialista: " << this->_esp->_nome
        << " Cliente: " << this->_cliente
        << " Descricao: " << this->_descricao << std::endl;
}
