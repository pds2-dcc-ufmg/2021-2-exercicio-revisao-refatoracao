#include <iostream>
#include <iomanip>

#ifndef GERENTE_HPP
#define GERENTE_HPP

class Gerente: public Funcion�rio {

    private:

        double bonificacao;
        double ValorBONIFICACAO = 15.0;

    public:

        void print(); //imprime dados do gerente

        double calcula_BONIFICACAO_GERENTE(numTOTALVendas);

}

#endif

