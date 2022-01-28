#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

using namespace std;

class Venda{

    public:

    double getValor();
    string getDescricao();
    Especialista getEsp();
    string getcliente();
    void print();

    Venda(double valor = 0, string descricao = "", Especialista esp = Especialista(), string cliente = "");

    private:
    
    double valor;
    string descricao;
    Especialista esp;
    string cliente;

};

#endif
