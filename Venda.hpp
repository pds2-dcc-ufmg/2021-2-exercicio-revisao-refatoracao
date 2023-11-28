
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

using namespace std;

class Venda{

    private:
        double valor;
        string descricao;
        Especialista esp;
        string cliente;

    public:
        void print();
        double get_valor();
        void set_valor(double novo_valor);
        string get_descricao();
        void set_descricao(string nova_descricao);
        Especialista get_esp();
        void set_esp(Especialista novo_especialista);
        string get_cliente();
        void set_cliente(string novo_cliente);

};

#endif
