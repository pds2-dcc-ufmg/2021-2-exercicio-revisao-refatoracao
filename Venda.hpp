
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

using namespace std;

class Venda{

    private:

        public:
        double VALOR;
        string descricao;
        Especialista esp;
        string cliente;

    public:

        double getVALOR(){ return VALOR;}
        void setVALOR(double newVALOR)
        {
            this->VALOR = newVALOR;
        }

        string getDescricao(){ return descricao;}
        void setDescricao(string newDescricao)
        {
            this->descricao = newDescricao;
        }

        string getCliente(){ return cliente;}
        void setCliente(string newCliente)
        {
            this->cliente = newCliente;
        }

        Especialista getEsp(){ return esp;}
        void setEsp( Especialista newEsp)
        {
            this->esp = newEsp;
        }

        

        void print() {

            std::cout << "Especialista: ";
            cout << esp.getNome();

            std::cout << " Cliente: ";
            cout << cliente;

        }

    
};

#endif
