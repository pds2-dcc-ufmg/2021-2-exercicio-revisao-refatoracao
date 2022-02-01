#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

using namespace std;

class Venda{
    private:
        double valor;
        string descricao;
        Especialista esp;
        string cliente;

    public:
        // Construtores
        Venda(string argCliente, Especialista argEsp, string argDesc, double argValor):
        cliente(argCliente), esp(argEsp), descricao(argDesc), valor(argValor) {}
        Venda(){}

        // Retorna valor
        double getValor();

        // Retorna descricao
        string getDescricao();

        // Retorna cliente
        string getCliente();

        // Imprime informações da venda
        void print();
};

#endif
