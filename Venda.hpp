
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Pessoa.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

using namespace std;

class Venda : public Pessoa{

    public:
        Venda(double valor, string descricao, Especialista esp, Cliente cl);
        void print() const override;
    
    private:
        double valor;
        string descricao;
        Especialista esp;
        Cliente cl;
};

#endif
