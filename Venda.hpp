
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

using namespace std;

class Venda
{

public:
    double VALOR;
    string descricao;
    Especialista esp;
    string cliente;

    Venda(const string &_cliente, const Especialista &_esp, string _descricao, double _VALOR )
        : VALOR(_VALOR), descricao(_descricao), esp(_esp), cliente(_cliente) {};

    void print()
    {

        std::cout << "Especialista: ";
        cout << esp.nome;

        std::cout << " Cliente: ";
        cout << cliente;
    }
};

#endif
