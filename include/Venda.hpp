#ifndef VENDA_HPP
#define VENDA_HPP

#include "Especialista.hpp"


class Venda{

    public:

        Venda(double valor, std::string descricao, Especialista &esp, std::string cliente);

        void print();

        double getValor() {
            return this->valor;
        }

        std::string getDescricao() {
            return this->descricao;
        }

        Especialista getEspecialista() {
            return *esp;
        }


    private:

        double valor;
        std::string descricao;
        Especialista *esp;
        std::string cliente;
        
};

#endif
