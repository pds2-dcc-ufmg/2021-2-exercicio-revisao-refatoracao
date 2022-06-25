#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

using namespace std;

class Venda{
public:
    Venda();
    double _valor;
    string _descricao;
    Especialista _especialista;
    string _cliente;

    Venda(double valor, string descricao, Especialista especialista, string cliente);

    double getValor();
    void setValor(double);

    Especialista getEspecialista();
    void setEspecialista(Especialista);

    string getDescricao();
    void setDescricao(string);

    string getCliente();
    void setCliente(string);

    void print();
};

#endif
