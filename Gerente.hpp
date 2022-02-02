#ifndef GERENTE_HPP
#define GERENTE_HPP
//Bibliotecas 
#include <iostream>
#include <iomanip>
#include "Funcionario.hpp"
//Define do Valor necessário para calcular a bonificacao do Gerente
#define ValorBonificacao 15.0;
using namespace std;

class Gerente: public Funcionario {
    public:
//Metodos da Classe
    double GetBonificacao();
    void Print();
    void CalculaBonificacaoGerente(int NumTotalVendas);
    private:
//Parametros da Classe
    double Bonificacao;
};

#endif

