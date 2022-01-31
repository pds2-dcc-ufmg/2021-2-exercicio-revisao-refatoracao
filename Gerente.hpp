#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

using namespace std;

double ValorBONIFICACAO = 15.0;

class Gerente : public Funcionario{
    private:
        double bonificacao;

    public:

        double getbonificacao(){
            return bonificacao;
        }

        void setbonificacao(double bonus){
            bonificacao = bonus;
        }

        void print() {
            cout << "[Funcionario]" << endl
            << "[Gerente]" << endl
            << "  Nome: " << nome << endl;
            Funcionario::print();
            cout << "  SalarioBase: R$ " << fixed << setprecision(2) << SalarioBaseFuncionario <<endl;
        }

        double calcula_BONIFICACAO_GERENTE(int numTOTALVendas){
            return numTOTALVendas*ValorBONIFICACAO;
        }

};

#endif

