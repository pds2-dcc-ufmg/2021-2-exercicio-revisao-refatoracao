#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>
#include "Funcionario.hpp"
using namespace std;

 

class Gerente: public Funcionario {
    private:
        double ValorBONIFICACAO = 15.0;
        double bonificacao;
    public:
        Gerente(string nome, string IDADE, int rg,double SB):Funcionario( nome,  IDADE,  rg, SB){

        }
        void print() {
            cout << "[Funcionario]" << endl
            << "[Gerente]" << endl
            << "  Nome: " << nome << endl
            << "  Idade: " << IDADE << endl
            << "  RGFunc: " << rgFunc << endl
            << "  SalarioBase: R$ " << fixed << setprecision(2) << SalarioBase <<endl;
        }
        void setBonificacao(int numTOTALVendas){
            this->bonificacao= numTOTALVendas*ValorBONIFICACAO;
        }
        double getBonificacao(){
            return this->bonificacao;
        }

};

#endif

