
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

class Venda{

    public:

        Venda(std::string cliente, class Especialista *esp, std::string descricao, double valor);
        void set_valor(double valor);
        double get_valor();
        void set_descricao(std::string descricao);
        std::string get_descricao();
        void set_esp(Especialista *esp);
        Especialista* get_especialista();
        void set_cliente(std::string cliente);
        std::string get_cliente();
        void print(); // imprime as informacoes da venda.

    private:

        double valor;
        std::string descricao;
        class Especialista *esp;
        std::string cliente;
};

#endif
