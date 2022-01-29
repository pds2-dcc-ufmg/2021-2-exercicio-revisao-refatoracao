#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

class Funcionario
{
public:
    double salariobase_funcionario; // valor m�nimo recebido pelo funcion�rio
    std::string idade_funcionario;
    std::string nome_funcionario;
    int rg_funcionario;

    void imprime_Funcionario()
    {
        std::cout << "[Funcionario]" << std::endl
                  << "Idade: " << idade_funcionario << ", RGFunc: " << rg_funcionario;
    }
};

#endif
