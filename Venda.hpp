
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

using namespace std;

class Venda{

    public:
        string cliente;
        Especialista *esp;
        string descricao;
        double valor;

        static int NumTotalServicos;

        Venda(string _cliente, Especialista *_esp, string _descricao, double _VALOR);

        void print();

};

#endif
