#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

class Venda{

    public:

        void print();

        Venda (std::string cliente,
               Especialista esp,
               std::string descricao,
               int valor);
        ~Venda ();

        double getValor ();

        std::string getDescricao ();

        Especialista esp;

    private:
        double valor;


        std::string descricao;
        std::string cliente;
};

#endif
