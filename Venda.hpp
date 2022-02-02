
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Cliente.hpp"
#include "Especialista.hpp"

using namespace std;

class Venda {

    public:

        double valor;
        string descricao;
        Especialista esp;
        Cliente cliente;

        void imprimeVenda();

};

#endif
