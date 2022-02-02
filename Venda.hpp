
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

class Venda{

    public:

        void setDescricao(std::string);
        std::string getdescricao();
        void setCliente(std::string);
        std::string getCliente();
        void setvalor(double);
		double setvalor();
        
        std::string descricao;
        double valor;
        Especialista esp;
        std::string cliente;

    void print();
};

#endif