
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

using namespace std;

class Venda
{

public:
    Venda(Cliente cliente, double valor, string descricao, Especialista especialista) : cliente(cliente), valor(valor), descricao(descricao), especialista(especialista) {
        especialista.adicionaVenda(valor);
        Venda::numVendas += 1;
    };
    void imprimir();
    void setValor(double valor);
    void setDescricao(string descricao);
    static int getNumVendas(){
        return Venda::numVendas;
    };

private:
    Cliente cliente;
    double valor;
    string descricao;
    Especialista especialista;
    static int numVendas;
};

#endif
