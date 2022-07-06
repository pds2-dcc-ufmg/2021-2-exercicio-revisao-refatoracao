#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

using namespace std;

class Venda {

    public:
    
    Venda(string cliente, Especialista especialista, double valor, string descricao);

    void print();

    double getValor();

    string getDescricao();

    private:

    double _valor;
    string _cliente;
    string _descricao;
    Especialista _especialista;

};

#endif
