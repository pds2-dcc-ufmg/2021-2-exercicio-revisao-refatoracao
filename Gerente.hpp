#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

using namespace std;

double ValorBONIFICACAO = 15.0;

class Gerente {
    public:
        Gerente(double salarioBase, string idade, string nome, int rg, double bonificacao) : _salarioBase(salarioBase), _idade(idade), _nome(nome), _rg(rg), _bonificacao(bonificacao){};
        double _salarioBase; // valor m�nimo recebido pelo funcion�rio
        string _idade;
        string _nome;
        int _rg;
        double _bonificacao;


        void print() {
            cout << "[Funcionario]" << endl
            << "[Gerente]" << endl
            << "  Nome: " << _nome << endl
            << "  Idade: " << _idade << endl
            << "  RGFunc: " << _rg << endl
            << "  SalarioBase: R$ " << fixed << setprecision(2) << _salarioBase <<endl;
        }

        double calculaBonificacaoGerente(int numTotalVendas){
            return numTotalVendas*ValorBONIFICACAO;
        }

};

#endif

