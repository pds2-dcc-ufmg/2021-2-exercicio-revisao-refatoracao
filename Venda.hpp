#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"


class Venda{

    public:
        double getValor();
        std::string getDescricao();
        Especialista getEsp();
        Cliente getCliente();
        void setValor(double valor);
        void setDescricao(std::string descricao);
        void setEsp(Especialista esp);
        void setCliente(Cliente cliente);

        void imprimeDadosVenda();

    private:

        double _valor;
        std::string _descricao;
        Especialista _esp;
        Cliente _cliente;

};

#endif
