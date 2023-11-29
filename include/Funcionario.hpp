#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

class Funcionario {

  public:

	double salarioBase; // valor mínimo recebido pelo funcionário
        std::string idade;
        std::string nome;
        int rgFuncionario;

        void print();

};

#endif
