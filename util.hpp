#ifndef UTIL_HPP
#define UTIL_HPP
#include <iostream>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"
#include <vector>

void InsereCliente (std::string Nome, std::string Endereco, std::string Cep,  std::vector <Cliente*> &Clientes);

void InsereEspecialista(double Salario, std::string Idade, std::string Nome, int RgFuncionario, 
std::string Especialidade, int NumAtendimentos, double Comissao, std::vector <Especialista*> &Especialistas);

void InsereGerente(double Salario, std::string Idade, std::string Nome, int RgFuncionario,
std::vector <Gerente*> &Gerentes);

Cliente* VerificaClienteDaVenda (std::string ClienteVenda, std::vector <Cliente*> &Clientes);

Especialista* VerificaEspecialistaDaVenda (std::string EspecialistaVenda, std::vector <Especialista*> &Especialistas);

void setGerenteDaVenda (std::string GerenteVenda, std::vector <Gerente*> &Gerentes, std::vector <Venda*> &Vendas);

void InsereVenda(double ValorVenda, std::string Descricao, std::string EspecialistaVenda, std::string ClienteVenda,
std::vector <Especialista*> &Especialistas, std::vector <Cliente*> &Clientes, std::vector <Venda*> &Vendas);

template <class T>
void ImprimeStatus(std::vector <T*> Impresso);

#endif