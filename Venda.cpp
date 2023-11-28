#include "Venda.hpp"

Venda::Venda(double valor, std::string descricao, Especialista especialista, Cliente cliente) :
_valor(valor), _descricao(descricao), _especialista(especialista), _cliente(cliente);

Venda::imprimeVenda() {
  std::cout << "Especialista: " << _especialista._nome << std::endl;
  std::cout << "Cliente: " << _cliente._nome << std::endl;
  std::cout << "Descrição: " << _descricao << std::endl;
  std::cout << "Valor: R$ " << fixed << setprecision(2) << _valor << std::endl;
}
