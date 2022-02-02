#include <iostream>
#include <string>
#include "Especialista.hpp"

double Especialista::calcular_comissao(double _valor_venda){
    return _valor_venda*_perc_comissao;
}

void Especialista::print(){
  std::cout << "[Especialista]" << endl;
  Funcionario::print();
}
