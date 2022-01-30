#include "Venda.hpp"

#include <string>
#include <iostream>

void Venda::print() {

        std::cout << "Especialista: " <<  esp.getNome
		  << "Cliente: " << cliente;
}

double Venda::getValorVenda() {return(valorVenda);}
std::string Venda::getDescricao() {return(descricao);}
std::string Venda::getCliente() {return(cliente);}

void Venda::setValorVenda(double novoValorVenda) {valorVenda = novoValorVenda;}
void Venda::setDescricao(std::string novaDescricao) {descricao = novaDescricao;}
void Venda::setCliente(std::string novoCliente) {cliente = novoCliente;}
