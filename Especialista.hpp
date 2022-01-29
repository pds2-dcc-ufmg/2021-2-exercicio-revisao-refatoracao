#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

double PORCENTAGEM = 0.1;

class Especialista : public Funcionario
{
public:
    std::string especialidade; // especialidade do funcionario

    double Valor_Comissao(double ValorVenda) // valor da comissao a ser recebida pela venda
    {
        return ValorVenda * PORCENTAGEM;
    }

    void imprime_Funcionario()
    {
        std::cout << "[Especialista]" << std::endl;
        Funcionario::imprime_Funcionario();
        std::cout << " Nome: " << nome_funcionario << ", SalarioBase: R$ " << std::fixed << std::setprecision(2) << salariobase_funcionario << std::endl;
    }
};

#endif
