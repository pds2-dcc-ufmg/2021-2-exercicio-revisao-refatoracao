#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

using namespace std;

double ValorBONIFICACAO = 15.0;

class Gerente : public Funcionario{
    public:

        void print() {
            cout << "[Funcionario]" << endl
            << "[Gerente]" << endl
            << "  Nome: " << getNome() << endl
            << "  Idade: " << getIdade() << endl
            << "  RGFunc: " << getRgfunc() << endl
            << "  SalarioBase: R$ " << fixed << setprecision(2) << getSalarioBase() <<endl;
        }

        double calcula_BONIFICACAO_GERENTE(int numTOTALVendas){
            return numTOTALVendas*ValorBONIFICACAO;
        }

    double getBonificacao(){
        return this->bonificacao; 
    }

    void setBonificacao(double bonificacao){
        this->bonificacao = bonificacao; 
    }

    private: 
        double bonificacao;

};

#endif

