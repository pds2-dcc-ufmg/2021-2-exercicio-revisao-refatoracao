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
        void print() {
            cout << "[Funcionario]" << endl
            << "[Gerente]" << endl
            << "  Nome: " << nome << endl
            << "  Idade: " << idade << endl
            << "  RGFunc: " << rgFunc << endl
            << "  SalarioBase: R$ " << fixed << setprecision(2) << salarioBase <<endl;
        }
        /**
        *@param numTotalVendas Número total de vendas efetuadas
        */
        double calculaExtra(int numTotalVendas){
            return numTotalVendas*kValorBonificacao;
        }
        void setRendaExtra() {
            rendaExtra =  numTotalVendas*percComissao;   
        }
    
    private:
        /**
        *@brief Valor mínimo recebido pelo funcionário
        */
        double salarioBase;
        percComissao = 15.0;
};

#endif

