#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

class Funcionario
{
public:
    double salariobase_funcionario; // valor minimo recebido pelo funcionario
    std::string idade_funcionario;  //idade do funcionario
    std::string nome_funcionario;   // nome do funcionario
    int rg_funcionario;             //rg do funcionario

    virtual void imprime_Funcionario() //imprime os dados do funcionario
    {
        std::cout << "[Funcionario]" << std::endl
                  << "  Idade: " << idade_funcionario << std::endl
                  << "  RGFunc: " << rg_funcionario << std::endl;
        std::cout << "  Nome: " << nome_funcionario << std::endl
                  << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << salariobase_funcionario << std::endl;
    }
};

#endif
