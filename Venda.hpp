#ifndef VENDA_HPP
#define VENDA_HPP

#include "Cliente.hpp"
#include "Especialista.hpp"
#include "Funcionario.hpp"

#include<string>
#include<iostream>

using namespace std;

class Venda{

  public:
    Venda(Cliente cli, Especialista* esp, string descricao, double valor) : cliente(cli), especialista(esp) {

      this->descricao = descricao;
      this->valor = valor;

      esp->calcular_comissao(valor);
      esp->num_atendimentos++;
    }   

    double valor;
    string descricao;
    Especialista* especialista;
    Cliente cliente;

    void print() {

      cout << " Especialista: "  << especialista->nome
           << " Cliente: "  << cliente.nome 
           << " Descricao: "  << descricao << endl;
    }
};

#endif
