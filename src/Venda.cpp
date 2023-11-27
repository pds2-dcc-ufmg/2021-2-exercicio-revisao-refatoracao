#include <iomanip>
#include <iostream>

#include "Venda.hpp"
#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Gerente.hpp"

Venda::Venda(std::string nome, std::string descricao, double valor, Especialista *especialista)
{
    this->_nome = nome;
    this->_descricao = descricao;
    this->_valor = valor;
    this->_especialista = especialista;
}

double Venda::getValor() { return _valor; }

std::string Venda::getDescricao() { return _descricao; }

Especialista Venda::getEspecialista() { return this->_especialista->getNome(); }

void Venda::print()
{

    std::cout << "Especialista: " << this->_especialista->getNome();
    std::cout << " Cliente: " << getNome();
    std::cout << " Descricao: " << getDescricao() << std::endl;
}