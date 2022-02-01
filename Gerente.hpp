#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

using namespace std;
class Gerente {
    public:
        double salarioBase; // valor minimo recebido pelo funcionirio
        string idade;
        string nome;
        int rgFunc;
        double bonificacao;

        Gerente () {};
        Gerente(string nome, string idade, int rgFunc, double salarioBase, double bonificacao);
        void printGerente();
        double calculaBonificacaoGerente(int numTotalVendas);
};

#endif

