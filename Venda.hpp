#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

class Venda{

    public:

        virtual void print();

        Venda (std::string cliente, Especialista esp, std::string descricao, int valor);

        void setEspecialista (Especialista esp);

        ~Venda ();

        double getValor ();


    private:
        double valor;

        Especialista esp;

        std::string descricao;
        std::string cliente;
};

#endif
