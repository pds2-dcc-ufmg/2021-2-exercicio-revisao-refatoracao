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

void FerramentaADM::imprime_clientes() {
    for (auto it = this->v_clientes.begin(); it < this->v_clientes.end(); it++) {
        it->imprime_dados();
    }
}

void FerramentaADM::add_venda(Venda& venda) {
    this->v_vendas.push_back(venda);
}

void FerramentaADM::imprime_vendas() {
    std::cout << " \n \n           Relatorio das Vendas \n" << std::endl;
    for (auto it = this->v_vendas.begin(); it < this->v_vendas.end(); it++) {
        it->imprime_dados();
    }
}