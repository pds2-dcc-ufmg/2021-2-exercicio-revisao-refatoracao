#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

using namespace std;

class Venda{

    public:

    void print() {

        std::cout << "Especialista: ";
        cout << esp.getNome();

        std::cout << " Cliente: ";
        cout << cliente;

    }

    private:
    
    double valor;
    string descricao;
    Especialista esp;
    string cliente;

};

#endif
