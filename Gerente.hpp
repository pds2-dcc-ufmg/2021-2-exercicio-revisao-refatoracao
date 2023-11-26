#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

using namespace std;

double ValorBONIFICACAO = 15.0;

class Gerente {
    private:
        double SalarioBase; // valor m�nimo recebido pelo funcion�rio
        string idade;
        string nome;
        int rgFunc;
        double bonificacao;

    public:

        Gerente(_SalarioBase,_idade,_nome,_rgFunc,_bonificiacao);
        
        void print();

        double calcula_BONIFICACAO_GERENTE(int numTOTALVendas);
        

};

#endif

