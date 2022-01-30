#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

double PORCENTAGEM_COMISSAO = 0.1;

class Especialista : public Funcionario
{
public:
    std::string especialidade; // especialidade do funcionario

    double valor_Comissao(double ValorVenda) // valor da comissao a ser recebida pela venda
    {
        return ValorVenda * PORCENTAGEM_COMISSAO;
    }

    void imprime_Especialista() //imprime os dados do especialista
    {
        std::cout << "[Especialista] " << std::endl;
        Funcionario::imprime_Funcionario();
    }
};

#endif
