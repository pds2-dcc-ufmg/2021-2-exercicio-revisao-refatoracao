#include <iostream>
#include <iomanip>

#ifndef GERENTE_HPP
#define GERENTE_HPP

class Gerente: public Funcionário {

    private:

        double bonificacao;
        double ValorBONIFICACAO = 15.0;

    public:

        void setBonificacao(double bonificacao);
        void setValorBONIFICACAO(double ValorBONIFICACAO);
        double getBonificacao();
        double getValorBONIFICACAO();

        void print(); //imprime dados do gerente

        double calcula_BONIFICACAO_GERENTE(numTOTALVendas);

}

#endif

