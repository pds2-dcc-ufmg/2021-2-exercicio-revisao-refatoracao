
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

class Venda
{

public:
    double valor_venda;    //valor da venda realizada
    std::string descricao; //descricao da venda
    Especialista esp;
    std::string cliente;

    void imprime_Venda()
    {
        std::cout << "Especialista: " << esp.nome_funcionario << " – Cliente: " << cliente << " –";
    }
};

#endif
