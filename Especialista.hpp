#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

class Especialista : public Funcionario {    
    public:
        /**
        *@brief Imprime informações do especialista (nome, idade, rg e salario base)
        */
        void print() {
            cout << "[Funcionario]" << endl
            << "[Especialista]" << endl
            << "  Nome: " << nome << endl
            << "  Idade: " << idade << endl
            << "  RGFunc: " << rgFunc << endl
            << "  SalarioBase: R$ " << fixed << setprecision(2) << salarioBase <<endl;
        }
        /**
        *@param valorVenda Valor da Venda
        */
        double calculaExtra(double valorVenda) {
            return valorVenda*percComissao;
        } 

    private:
        percComissao = 0.1;
};

#endif
