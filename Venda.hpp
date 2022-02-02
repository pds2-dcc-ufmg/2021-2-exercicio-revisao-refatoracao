
#ifndef VENDA_HPP
#define VENDA_HPP

#include <string>
#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"



using namespace std;

class Venda
{
  private:
    double valor_venda;
    string descricao_venda;
    Especialista especialista;
    Cliente cliente;

  public:
    //Getter
    double get_valor_venda();
    string get_descricao_venda();
    Especialista get_especialista();
    Cliente get_cliente();

    //Setter
    void set_valor_venda(double valor_venda_inserido);
    void set_descricao_venda(string descricao_venda_inserida);
    void set_especialista(Especialista especialista_inserido);
    void set_cliente(Cliente cliente_inserido);

    //Impressão
    void print();
};

#endif