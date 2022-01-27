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

void FerramentaADM::relatorio_funcs() {
    std::cout <<" \n \n           Relatorio dos Funcionarios \n" << std::endl;
    for (auto it = this->v_especialistas.begin(); it < this->v_especialistas.end(); it++) {
        it->imprime_dados();
        std::cout << "Num Atendimentos: " << it->_numAtendimentos << std::endl
                << "Salario Total: " << it->_salarioBase + it->_comissao << std::endl;
    }
}

void FerramentaADM::relatorio_gerente() {
    for (auto it = this->v_gerentes.begin(); it < this->v_gerentes.end(); it++) {
        it->imprime_dados();
        it->calcula_bonificacao(v_vendas.size());
        std::cout << "Salario Total: " << it->_salarioBase + it->_bonifTotal << std::endl;
    }
    
}