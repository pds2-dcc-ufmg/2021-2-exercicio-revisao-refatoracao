#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

class Venda{

    public:

        void setValor(double valor);
        void setDescricao(std::string descricao);
        void setCliente(std::string cliente);
        void setEsp(Especialista esp);

        double getValor();
        std::string getDescricao();
        std::string getCliente();
        Especialista getEsp();
        void print(); // imprime na tela os dados da venda

    private:
        
        double valor;
        std::string descricao;
        std::string cliente;
        Especialista esp;


};

#endif
