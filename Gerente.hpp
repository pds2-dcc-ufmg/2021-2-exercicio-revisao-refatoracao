#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

using namespace std;



class Gerente : public Funcionario{

    private:
        double bonificacao;
        static double ValorBONIFICACAO = 15.0;
    
    public:
    
        void print() {
            cout << "[Gerente]" << endl;
           Funcionario::print();
        }

        double calcula_BONIFICACAO_GERENTE(int numTOTALVendas){
            return numTOTALVendas*ValorBONIFICACAO;
        }

};

#endif

