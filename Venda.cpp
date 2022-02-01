#include "Venda.hpp"
#include <iostream>
#include <string>

void Venda::imprimir() {
  std::cout << "Especialista: " << especialista->getNome();
  std::cout << " Cliente: " << cliente.getNome();
  std::cout << " Descricao: " << descricao << std::endl;
}

void Venda::setValor(double novoValor) {
  especialista->alteraComissao(valor, novoValor);
  valor = novoValor;
}

void Venda::setDescricao(string novaDescricao) { descricao = novaDescricao; }