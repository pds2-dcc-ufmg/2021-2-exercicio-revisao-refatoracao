#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

using namespace std;

double ValorBONIFICACAO = 15.0;

class Gerente : private Funcionario{
    private:
        double _bonificacao;

    public:
        void print() {
            cout << "[Funcionario]" << endl
            << "[Gerente]" << endl
            << "  Nome: " << _nome << endl
            << "  Idade: " << _IDADE << endl
            << "  RGFunc: " << _rgFunc << endl
            << "  SalarioBase: R$ " << fixed << setprecision(2) << _SalarioBase <<endl;
        }
        Gerente(double salarioBase, string Idade, string nome, int rgFunc,double bonificacao){
            _IDADE = Idade;
            _SalarioBase = salarioBase;
            _nome = nome;
            _rgFunc = rgFunc;
            _bonificacao = bonificacao;
        }
        Gerente() = default;
        void setBonificao(double novaBonificacao){
            _bonificacao = novaBonificacao;
        }
        double getBonificacao(){
            return _bonificacao;
        }
        double getSalarioBase(){
            return _SalarioBase;
        }
        double calcularTotal(){
            return _SalarioBase + _bonificacao;
        }
        double calcula_BONIFICACAO_GERENTE(int numTOTALVendas){
            double x;
            return numTOTALVendas*ValorBONIFICACAO;
        }

};

#endif

