#ifndef UTIL_HPP
#define UTIL_HPP
#include <iostream>

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Venda.hpp"
#include "Gerente.hpp"
#include <vector>

/**
 * @brief Desaloca a memoria dos elementos de um vetor, além de removê-lo.
 *
 * @param Removido Vetor a ser removido.
 */
template <class O>
void RemoveVector(std::vector<O*> &Removido){
     for (auto iterator_1 = Removido.begin(); iterator_1 != Removido.end(); iterator_1++){
                delete (*iterator_1);            
    }
    Removido.clear();
}

/**
 * @brief Insere os dados de um cliente em um vetor de clientes.
 *
 * @param Nome Nome do cliente a ser inserido.
 * @param Endereco Endereco do cliente a ser inserido.
 * @param Cep Cep do cliente a ser inserido.
 * @param Clientes vetor de clientes já cadastrados.
 */
void InsereCliente (std::string Nome, std::string Endereco, std::string Cep, std::vector <Cliente*> &Clientes);

/**
 * @brief Insere os dados de um Especialista em um vetor de Especialistas.
 *
 * @param Nome Nome do Especialista a ser inserido.
 * @param Idade Idade do Especialista a ser inserido.
 * @param Salario Salario base do Especialista a ser inserido.
 * @param RgFuncionario Rg do Especialista a ser inserido.
 * @param Especialidade Especialidade do Funcionário. Ex: "Fotografia".
 * @param NumAtendimentos Numero de atendimentos realizados pelo Especialista.
 * @param Comissao Comissao recebida pelo especialista.
 * @param Especialistas vetor de Especialistas já cadastrados.
 */
void InsereEspecialista(double Salario, std::string Idade, std::string Nome, int RgFuncionario, 
std::string Especialidade, int NumAtendimentos, double Comissao, std::vector <Especialista*> &Especialistas);

/**
 * @brief Insere os dados de um Gerente em um vetor de Gerentes.
 *
 * @param Nome Nome do Gerente a ser inserido.
 * @param Idade Idade do Gerente a ser inserido.
 * @param Salario Salario base do Gerente a ser inserido.
 * @param RgFuncionario Rg do Gerente a ser inserido.
 * @param Gerentes vetor de Gerentes já cadastrados.
 */
void InsereGerente(double Salario, std::string Idade, std::string Nome, int RgFuncionario,
std::vector <Gerente*> &Gerentes);

/**
 * @brief Verifica se o nome de um cliente está inserido dentro do vetor de clientes.
 *
 * @param ClienteVenda Nome do Cliente a ser verificado.
 * @param Clientes vetor de Clientes já cadastrados.
 * 
 * @returns Cliente* Uma referência para o Cliente encontrado no vetor, o Cliente da Venda.
 */
Cliente* VerificaClienteDaVenda (std::string ClienteVenda, std::vector <Cliente*> &Clientes);

/**
 * @brief Verifica se o nome de um Especialista está inserido dentro do vetor de especialistas.
 *
 * @param EspecialistaVenda Nome do Especialista a ser verificado.
 * @param Especialitas vetor de Especialistas já cadastrados.
 * 
 * @returns Especialista* Uma referência para o Especialista encontrado no vetor, o Especialista da Venda.
 */
Especialista* VerificaEspecialistaDaVenda (std::string EspecialistaVenda, std::vector <Especialista*> &Especialistas);

/**
 * @brief Seta o Gerente responsável por um conjunto de vendas.
 *
 * @param GerenteVenda Nome do Gerente a ser setado.
 * @param Gerentes vetor de Gerentes já cadastrados.
 * @param Vendas vetor de vendas que o gerente é responsável.
 */
void setGerenteDaVenda (std::string GerenteVenda, std::vector <Gerente*> &Gerentes, std::vector <Venda*> &Vendas);

/**
 * @brief Insere uma venda em um vetor que representa um conjunto de vendas de mesmo gerente.
 *
 * @param ValorVenda Valor da venda em reais.
 * @param Descricao Uma breve descricao da venda.
 * @param EspecialistaVenda Nome do Especialista que realizou a venda.
 * @param ClienteVenda Nome do Cliente que comprou tal serviço, isto é, participou da venda.
 * @param Especialitas vetor de Especialistas já cadastrados. 
 * @param Clientes vetor de Clientes já cadastrados.
 * @param Vendas vetor de vendas que um determinado gerente é responsável.
 */
void InsereVenda(double ValorVenda, std::string Descricao, std::string EspecialistaVenda, std::string ClienteVenda,
std::vector <Especialista*> &Especialistas, std::vector <Cliente*> &Clientes, std::vector <Venda*> &Vendas);

/**
 * @brief Imprime na tela os detalhes dos elementos de um vetor.
 *
 * @param Impresso Vetor a ser impresso.
 */
template <class T>
void ImprimeStatus(std::vector <T*> Impresso) {
    for (const auto& iterator_1:Impresso){
                iterator_1->Print();            
    }
}

#endif