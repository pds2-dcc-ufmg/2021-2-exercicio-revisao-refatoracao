#ifndef FERRAMENTAADM_H
#define FERRAMENTAADM_H

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Gerente.hpp"
#include "Venda.hpp"

#include "vector"

class FerramentaADM {
  public:
    void add_cliente(Cliente& cliente);
    void add_especialista(Especialista& esp);
    void add_gerente(Gerente& gerente);
    void add_venda(Venda& venda);
    void imprime_clientes();
    void imprime_vendas();

  private:
  std::vector<Cliente> v_clientes;
  std::vector<Especialista> v_especialistas;
  std::vector<Gerente> v_gerentes;
  std::vector<Venda> v_vendas;


};

#endif