#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

class Gerente {
    public:
        double SalarioBase; // valor m�nimo recebido pelo funcion�rio
        std::string IDADE;
        std::string nome;
        int rgFunc; // numero de registro do gerente
        double bonificacao; 


        void print();

        double calcula_BONIFICACAO_GERENTE(int numTOTALVendas);

    private: 
        double ValorBONIFICACAO = 15.0; 

};

#endif

