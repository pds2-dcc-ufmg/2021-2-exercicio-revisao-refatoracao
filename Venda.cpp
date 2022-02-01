#include <iostream>
#include <string>
#include "Venda.hpp"

void Venda::imprimir()
{
    std::cout << "[VENDA] " << std::endl;
    std::cout << "Valor: " << valor << std::endl;
    std::cout << "Descricao: " << descricao << std::endl;
    std::cout << "Especialista: " << especialista.getNome() << std::endl;
    std::cout << "Cliente: " << cliente.getNome() << std::endl;
}

void Venda::setValor(double novoValor){
    especialista.alteraComissao(valor, novoValor);
    valor = novoValor;
}

void Venda::setDescricao(string novaDescricao){
    descricao = novaDescricao;
}