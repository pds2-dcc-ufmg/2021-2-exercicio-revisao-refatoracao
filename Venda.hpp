
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Cliente.hpp"
#include "Especialista.hpp"

class Venda {

    public:
        void print();

        void setValor(double valor);
        void setDescricao(std::string descricao);
        void setEspecialista(Especialista* especialista);
        void setCliente(Cliente* cliente);

        double getValor();
        std::string getDescricao();
        Especialista* getEspecialista();
        Cliente* getCliente();

    private:
        double valor;
        std::string descricao;
        Especialista* especialista;
        Cliente* cliente;

};

#endif
