#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

double VALOR_BONIFICACAO = 15.0;

class Gerente : public Funcionario
{
public:
    double bonificacao_gerente; //mudei o nome da variavel

    void imprime_Gerente() // imprime na tela os dados do gerente
    {
        std::cout << "[Gerente]" << std::endl;
        Funcionario::imprime_Funcionario();
        std::cout << ", SalarioBase: R$ " << std::fixed << std::setprecision(2) << salariobase_funcionario << std::endl;
    }

    double
    calcula_BONIFICACAO_GERENTE(int numTOTALVendas)
    {
        return numTOTALVendas * VALOR_BONIFICACAO;
    }
};

#endif
