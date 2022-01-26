#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Gerente {
    public:
        double SalarioBase; // valor minimo recebido pelo funcionrio
        string IDADE;
        string nome;
        double bonificacao;
        int rgFunc;
        void print();
        double calcula_BONIFICACAO_GERENTE(int numTOTALVendas);

};

#endif

