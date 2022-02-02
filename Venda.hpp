
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

    void print()
    {

        cout << "Especialista: ";
        cout << esp.nome;

        cout << " Cliente: ";
        cout << cliente;

        //cout << " : ";
        //cout << cliente;
    }

    /*void print() {

        cout << "Especialista: ";
        cout << esp.nome;

        cout << " Cliente: ";
        cout << cliente;
    }*/
};

#endif
