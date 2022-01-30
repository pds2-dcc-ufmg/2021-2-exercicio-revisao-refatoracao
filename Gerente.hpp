#ifndef GERENTE_HPP
#define GERENTE_HPP

#include "Funcionario.hpp"

class Gerente : public Funcionario{

    public: 
        Gerente();
        Gerente(string, int, int, double);

        double getBonificacao();
        void setBonificacao(double);

        void print();  

        double calcula_bonificacao(int);
      

    private:
        double bonificacao;
        double valor_bonificacao = 15.0;
};

#endif

