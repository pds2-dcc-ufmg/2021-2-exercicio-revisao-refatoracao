#include "Venda.hpp"

Venda::Venda(Cliente& cliente, Especialista& esp, std::string descricao, double valor) {
  this->_cliente = cliente._nome;
  this->_esp = esp._nome;
  this->_descricao = descricao;
  this->_valor = valor;
}

void Venda::imprime_dados() {
  std::cout << "Especialista: " << _esp
    << " Cliente: " << _cliente;
}