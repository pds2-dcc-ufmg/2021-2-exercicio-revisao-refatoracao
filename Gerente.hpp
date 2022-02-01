#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

using namespace std;
 // todas as variaveis receberam a mesma formatacao
double valorBonificacao = 15.0;

class Gerente {

    // todas as variaveis receberam a mesma formatacao

    public:
        double salarioBase; // valor m�nimo recebido pelo funcion�rio
        string idade;
        string nome;
        int rgFunc;
        double bonificacao;


        void print() {
            cout << "[Funcionario]" << endl
            << "[Gerente]" << endl
            << "  Nome: " << nome << endl
            << "  Idade: " << idade << endl
            << "  RGFunc: " << rgFunc << endl
            << "  salarioBase: R$ " << fixed << setprecision(2) << salarioBase <<endl;
        }
     // todas as variaveis receberam a mesma formatacao
        double calcula_BONIFICACAO_GERENTE(int numTotalVendas){
            double x;
            return numTotalVendas*valorBonificacao;
        }

};

#endif

