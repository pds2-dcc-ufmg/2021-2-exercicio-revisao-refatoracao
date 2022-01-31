
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

using namespace std;

class Venda{

  public:
    Venda(Cliente cli, Especialista* esp, string descricao, double valor) : cliente(cli), especialista(esp) {
      this->descricao = descricao;
      this->valor = valor;

      esp->calcula_comissao(valor);
      esp->numAtendimentos++;
    }

    double valor;
    string descricao;
    Especialista* especialista;
    Cliente cliente;


    void print() {
      cout << "Especialista: "  << especialista->nome
           << " Cliente: "  << cliente.nome 
           << " Descricao: "  << descricao << endl;
    }
};

#endif
