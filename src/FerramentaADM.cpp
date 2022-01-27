#include "FerramentaADM.hpp"

void FerramentaADM::add_cliente(Cliente& cliente) {
  this->v_clientes.push_back(cliente);
}

void FerramentaADM::add_especialista(Especialista& especialista) {
    this->v_especialistas.push_back(especialista);
}

void FerramentaADM::add_gerente(Gerente &gerente) {
    this->v_gerentes.push_back(gerente);
}