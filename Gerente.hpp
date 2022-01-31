#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>




class Gerente{
    public:
        double ValorBONIFICACAO = 15.0;
        double SalarioBase; // valor m�nimo recebido pelo funcion�rio
        std::string IDADE;
        std::string nome;
        int rgFunc;
        double bonificacao;

        std::string get_Idade(){return IDADE;}
        std::string get_Nome(){return nome;}
        int get_Rg(){return rgFunc;}
        double get_Salario(){return SalarioBase;}


        void print();
        double calcula_BONIFICACAO_GERENTE(int numTOTALVendas);

};

#endif

