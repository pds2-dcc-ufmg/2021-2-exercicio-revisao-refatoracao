#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>
#include "Funcionario.hpp"

using namespace std;

class Gerente : public Funcionario {

    public:
       
        void print();

        //calcula a bonificacao do gerente
        double calculaBonificacao(int num_total_vendas);

        //conjunto de getters e setters para as variaveis
        void setBonificacao(double _bonificacao);
        void setValorBonificacao(const double _valor_bonificacao);
        
        double getValorBonificacao();
        double getBonificacao();



    private:

         double bonificacao = 0; //valor em reais a mais que o gerente irá receber
         double valor_bonificacao = 0; //valor em um número real que altera de gerente para gerente e é usado para calcular a bonificacao
};

#endif

