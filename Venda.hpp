
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

using namespace std;

class Venda{

    public:

    Venda();
    Venda(Cliente, Especialista*, string, double);

    double getValor();
    string getDescricao();
    Especialista *getEspecialista();
    Cliente getCliente();
    double getComissao();

    void setValor(double);
    void setDescricao(string);
    void setEspecialista(Especialista*);
    void setCliente(Cliente);
    void setComissao(double);

    void print();

    private:
        double valor;
        string descricao;
        Especialista *especialista;
        Cliente cliente;
        double comissao;
};

#endif
