#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

using namespace std;



class Gerente {
    public:
        double ValorBONIFICACAO = 15.0;
        double SalarioBase; // valor minimo recebido pelo funcionario
        string IDADE;
        string nome;
        int rgFunc;
        double bonificacao;
        void print();
        double calcula_BONIFICACAO_GERENTE(int numTOTALVendas);

};

#endif

