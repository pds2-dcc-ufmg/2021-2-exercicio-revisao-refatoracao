
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

using namespace std;

class Venda{

    public:
    double Valor;
    string Descricao;
    Especialista Espec;
    string Cliente;


    void print() {

        std::cout << "Especialista: ";
        cout << Espec.nome;

        std::cout << " Cliente: ";
        std::cout << Cliente;
    }
};

#endif
