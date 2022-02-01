
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

using namespace std;

class Venda{
  
  private:
    Especialista *esp;
    double valor;
    string descricao;
    string cliente;

  public:
    Venda(string cliente, string descricao,double valor, Especialista &esp){
      this->cliente = cliente;
      this->esp = &esp;
      this->descricao = descricao;
      this->valor = valor;
    }

    double getValor(){
      return valor;
    }

    string getDescricao(){
      return descricao;
    }

    void print() {
      std::cout << "Especialista: ";
      cout << esp->getName();

      std::cout << " Cliente: ";
      cout << cliente;
    }
};

#endif

