#ifndef GERENTE_HPP
#define GERENTE_HPP
#define ValorBonificacao 15.0

#include "Funcionario.hpp"
#include <iostream>
#include <iomanip>

using namespace std;

class Gerente {
    
    class Gerente: public Funcionario {
    public:
        
        Gerente (double SalarioBase, string Idade, string Nome, int RG_Func, double bonificacao);

        void print();

        double CalcBonificacaoGerente(int NumTotalVendas);
        void PrintSalarioTotal();
};

#endif

