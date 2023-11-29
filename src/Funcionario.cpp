#include <iostream>

#include "Funcionario.hpp"
   
	void Funcionario::print() {
            std::cout << "[Funcionario]" << std::endl
            << "  Idade: " << idade << std::endl
            << "  RGFunc: " << rgFuncionario << std::endl;
        }
