#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {
    public:
        double salario_base; // valor mínimo recebido pelo funcionário
        string idade; // idade do funcionário
        string nome; // nome do funcionário
        int rg_func; // número de identificação(RG) do funcionário

        void print(); // imprime na tela os dados de um cliente cadastrado
};

#endif
