#ifndef VENDA_HPP
#define VENDA_HPP

#include "Cliente.hpp"
#include "Especialista.hpp"

using namespace std;

class Venda {
    public:
        void setValor(double valor);
        double getValor();
        
        void setDescricao(string descricao);
        string getDescricao();

        void setEspecialista(Especialista expert);
        Especialista getEspecialista();
        
        void setCliente(Cliente client);
        Cliente getCliente();

        void print(); // Imprime na tela os detalhes da venda

    private:
        double Valor;
        string Descricao;
        Especialista especialista;
        Cliente cliente;
};

#endif
