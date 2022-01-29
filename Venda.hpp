
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

//removi o namespace
//using namespace std;

class Venda
{

public:
    double valor_venda;
    std::string descricao;
    Especialista esp;
    std::string cliente;

    void imprime_Venda()
    {

        std::cout << "Especialista: " << esp.nome_funcionario << ", Cliente: " << cliente << ",";
        //alterei a impresão
        //std::cout << " : ";
        //cout << cliente;
    }

    /*void print() {

        std::cout << "Especialista: ";
        cout << esp.nome;

        std::cout << " Cliente: ";
        cout << cliente;
    }*/
};

#endif
