#include <iostream>
#include <iomanip>

#ifndef GERENTE_HPP
#define GERENTE_HPP

double ValorBONIFICACAO = 15.0;

class Gerente {

    public:

        double SalarioBase; // valor m�nimo recebido pelo funcion�rio
        std::string idade;
        std::string nome;
        int rgFunc;
        double bonificacao;


        void print(); //imprime dados do gerente

        double calcula_BONIFICACAO_GERENTE(numTOTALVendas);

}

#endif

