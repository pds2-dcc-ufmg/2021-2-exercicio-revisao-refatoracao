#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>

using namespace std;

class Gerente : public Funcionario{
    public:
        double bonificacao;
        void print() {
            cout << "[Funcionario]" << endl
            << "[Gerente]" << endl
            << "  Nome: " << getname() << endl
            << "  Idade: " << getage() << endl
            << "  RGFunc: " << getdoc() << endl
            << "  SalarioBase: R$ " << fixed << setprecision(2) << getwage() <<endl;
        }

        double calcula_BONIFICACAO_GERENTE(int numTOTALVendas){
            return numTOTALVendas*15.0;
        }
};

#endif

