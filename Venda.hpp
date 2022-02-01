#ifndef VENDA_HPP
#define VENDA_HPP

#include "Cliente.hpp"
#include "Especialista.hpp"

class Venda
{
    public:
        Venda();
        Venda(double, std::string, Especialista*, Cliente*);
        void imprimeDados();
        
    private:
        double valor;
        std::string descricao;
        Especialista* especialista;
        Cliente* cliente;

};

#endif
