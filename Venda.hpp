
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Especialista.hpp"
#include <vector>


class Venda{

    private:
        double valor;
        std::string descricao, cliente;
        Especialista esp;
        
        

    public:

        Venda(double valor, std::string descricao, std::string cliente, Especialista& esp);

        virtual ~Venda();
        
        void print();

        double getValor();

        void addVenda(Venda& v);


};

//Padronização do layout das variáveis, modularização em hpp/cpp, variaveis declaradas private e retirada
//dos comentarios desnecessários dentro dos métodos, além da declaração dos métodos getValor e retirada de
//includes desnecessários
#endif
