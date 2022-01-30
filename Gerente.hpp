#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

double VALOR_BONIFICACAO = 15.0;

class Gerente : public Funcionario
{
public:
    double bonificacao_gerente; //bonificacao recebida pelo gerente

    void imprime_Gerente() // imprime na tela os dados do gerente
    {
        std::cout << "[Funcionario]" << std::endl
                  << "[Gerente]" << std::endl
                  << "  Nome: " << nome_funcionario << std::endl
                  << "  Idade: " << idade_funcionario << std::endl
                  << "  RGFunc: " << rg_funcionario << std::endl
                  << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << salariobase_funcionario << std::endl;
    }

    double calcula_BONIFICACAO_GERENTE(int numTOTALVendas) //calcula o valor da bonificacao recebida pelo gerente
    {
        return numTOTALVendas * VALOR_BONIFICACAO;
    }
};

#endif
