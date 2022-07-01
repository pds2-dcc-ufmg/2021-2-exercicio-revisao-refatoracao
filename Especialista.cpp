
#include "Funcionario.hpp"
#include "Cliente.hpp"
#include <iostream>

double perc = 0.1;
double percWanda = 0.1;

double comissao(double ValorVenda){
double c = ValorVenda*perc;
 return c;
}
void Print(){
std::cout << "[Especialista]"<< endl;
Funcionario::print();
std::cout << "  Nome: " << nome << endl
        << "  SalarioBase: R$ " << fixed << setprecision(2) << SalarioBase <<std::endl;
}
