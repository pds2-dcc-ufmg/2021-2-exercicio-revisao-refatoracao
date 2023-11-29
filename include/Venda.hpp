#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

using namespace std;

class Venda{
    private:
        string _nomeCliente = "";
        Especialista* _especialista = nullptr;

        string _descricao = "";
        double _valor = 0.0;
    public:
        Venda() {}

        Venda(string nomeCliente, Especialista* especialista, string descricao, double valor);

        Venda(Venda& venda);

        void print() const;
};

#endif
