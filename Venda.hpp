
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

class Venda{

    private:
    double Valor;
    std::string Descricao;
    Especialista* _Especialista;
    Cliente* _Cliente;


    public:

    void Print();

        //std::cout << " : ";
        //cout << cliente;

    /*void print() {

        std::cout << "Especialista: ";
        cout << esp.nome;

        std::cout << " Cliente: ";
        cout << cliente;
    }*/
};

#endif
