#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

using namespace std;

double VALOR_BONIFICACAO = 15.0;

class Gerente {
    public:
        double salarioBase; // valor m�nimo recebido pelo funcion�rio
        string idade;
        string nome;
        int rgFunc;
        double bonificacao;

        Gerente(string _nome, string _idade, double _rgFunc, double _salarioBase):
		nome(_nome), idade(_idade), rgFunc(_rgFunc), salarioBase(_salarioBase)
		{
            bonificacao = 0;
        }

        void imprimeDados() {
            cout << "[Funcionario]" << endl
            << "[Gerente]" << endl
            << "  Nome: " << nome << endl
            << "  Idade: " << idade << endl
            << "  RGFunc: " << rgFunc << endl
            << "  SalarioBase: R$ " << fixed << setprecision(2) << salarioBase <<endl;
            cout << "  Salario Total: " << salarioBase + bonificacao << endl;
        }

        void calculaBonificacao(int totalVendas){
            bonificacao = totalVendas * VALOR_BONIFICACAO;
        }

};

#endif

