#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

class Venda{
    private:
        double valor;
        std::string descricao;
        Especialista esp;
        std::string cliente;

    public:
        double getValor()  const;
        std::string getDescricao()  const;

        void setValor(double valor);
	    void setDescricao(std::string descricao);
        void setEsp(Especialista esp);
        void setCliente(std::string cliente);

        void print();
};

#endif