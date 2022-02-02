#include <iostream>
#include <string>
#include "Especialista.hpp"


double Especialista::comissao(double valorVenda){
        double c = valorVenda*perc;
        return c;
}

string getEspecialidade(){
  return this->especialidade;
}
void setEspecialidade(string especialidadeNovo){
  this->especialidade = especialidadeNovo;
}

