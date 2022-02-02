#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Gerente: public Funcionario {
    public:
        /**
        *@brief Imprime informações do gerente (nome, idade, rg e salario base)
        */
        void print() override {
            cout << "[Funcionario]" << endl
            << "[Gerente]" << endl
            << "  Nome: " << nome << endl
            << "  Idade: " << idade << endl
            << "  RGFunc: " << rgFunc << endl
            << "  SalarioBase: R$ " << fixed << setprecision(2) << salarioBase <<endl;
        }
        /**
        *@brief Calcula o valor da renda extra a ser recebida
        *@param numTotalVendas Número total de vendas efetuadas
        */
        double calculaExtra(int numTotalVendas) override {
            return numTotalVendas*percComissao;
        }
        /**
        *@brief Define o valor da renda extra a ser recebida
        *@param numTotalVendas Número total de vendas efetuadas
        */
        void setRendaExtra(int numTotalVendas) {
            rendaExtra =  calculaExtra(numTotalVendas);   
        }
    
    private:
        percComissao = 15.0;
};

#endif

