
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

using namespace std;

class Venda{

    public:

        void print();
        // métodos que retornam as variaveis
        double getValor();
        string getDescricao();
        string getCliente();
        Especialista getEspecialista();

        // métodos que alteram as variaveis
        void setValor(double valor);
        void setDescricao(string descricao);
        void setCliente(string cliente);
        void setEspecialista(Especialista especialista);

    private:

        double valor = 0;
        string descricao;
        Especialista especialista;
        string cliente;

};

#endif
