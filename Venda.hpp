#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

using namespace std;
class Venda{

    private:
        double valor_;
        string descricao_;
        Especialista especialista_;
        string cliente_;

    public:
        Venda();
        Venda(double valor, string descricao, Especialista* especialista, Cliente* cliente);

    void print();
};

#endif
