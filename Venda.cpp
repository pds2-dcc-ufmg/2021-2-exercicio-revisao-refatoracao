#include <iostream>
#include <string>
#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"

using namespace std;

//Getter
double Venda::get_valor_venda()
{
  return valor_venda;
}
string Venda::get_descricao_venda()
{
  return descricao_venda;
}
Especialista Venda::get_especialista()
{
  return especialista;
}
Cliente Venda::get_cliente()
{
  return cliente;
}

//Setter
void Venda::set_valor_venda(double valor_venda_inserido)
{
  valor_venda = valor_venda_inserido;
}
void Venda::set_descricao_venda(string descricao_venda_inserida)
{
  descricao_venda = descricao_venda_inserida;
}
void Venda::set_especialista(Especialista especialista_inserido)
{
  especialista = especialista_inserido;
}
void Venda::set_cliente(Cliente cliente_inserido)
{
  cliente = cliente_inserido;
}

void Venda::print() 
{
  std::cout << "Especialista: ";
  cout << especialista.get_nome();
  std::cout << " Cliente: ";
  cout << cliente.get_nome();
}