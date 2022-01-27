#ifndef FERRAMENTAADM_H
#define FERRAMENTAADM_H

#include "Cliente.hpp"
#include "Funcionario.hpp"
#include "Especialista.hpp"
#include "Gerente.hpp"

#include "vector"

class FerramentaADM {
  public:
    void add_cliente(Cliente& cliente);
    void add_especialista(Especialista& esp);
    void add_gerente(Gerente& gerente);

  private:
  std::vector<Cliente> v_clientes;
  std::vector<Especialista> v_especialistas;
  std::vector<Gerente> v_gerentes;


};

#endif