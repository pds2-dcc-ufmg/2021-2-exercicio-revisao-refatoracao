#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Gerente: public Funcionario {
    private:
        double _bonificacao;
        double ValorBONIFICACAO = 15.0;
    public:
        Gerente(string nome, string IDADE, int rgFunc, double SalarioBase):
        Funcionario(nome, IDADE, rgFunc, SalarioBase), _bonificacao(0) {}
        void print() {
            cout << "[Funcionario]" << endl
            << "[Gerente]" << endl
            << "  Nome: " << _nome << endl
            << "  Idade: " << _IDADE << endl
            << "  RGFunc: " << _rgFunc << endl
            << "  SalarioBase: R$ " << fixed << setprecision(2) << _SalarioBase << endl
            << "Salario Total: " << _SalarioBase + _bonificacao << endl;
        }

        double calcula_BONIFICACAO_GERENTE(int numTOTALVendas){
            double _bonificacao=numTOTALVendas*ValorBONIFICACAO;
            return _bonificacao;
        }

};

#endif

