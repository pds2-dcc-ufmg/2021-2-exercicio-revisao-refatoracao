#ifndef VENDA_HPP
#define VENDA_HPP

#include "Especialista.hpp"

using namespace std;

class Venda : public Especialista {
public:
    double VALOR;
    string descricao;
    Especialista esp;
    string cliente;
    void print() {
        cout << "Especialista: " << esp << endl 
        << "Cliente: " << cliente << endl;
    }
};

#endif
