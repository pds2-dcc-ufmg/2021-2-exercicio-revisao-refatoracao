#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>


class Gerente {
    private:
        double SalarioBase;
        std::string Idade;
        std::string Nome;
        int RG;
        double Bonificacao;

    public:
        Gerente (std::string Nome, std::string Idade, int RG, double SalarioBase, double Bonificacao);
        void Print();
        double calcula_BONIFICACAO_GERENTE(int numTOTALVendas);
        double get_SalarioBase();
        double get_Bonificacao();
        void set_Bonificacao(double Bonificacao);

    static double ValorBONIFICACAO;
};

#endif