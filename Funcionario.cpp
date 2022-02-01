#include <iostream>
#include <string>
#include "Funcionario.hpp"


//funcao que tem por funcao a impressao dos dados de um funcionario
void Funcionario::print(){
          std::cout << "[Funcionario]" << std::endl
            << "  Idade: " << IDADE << std::endl
            << "  RGFunc: " << rgFunc << std::endl
            << "  Nome: " << nome << std::endl
            << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << SalarioBase <<std::endl;
        } ;

