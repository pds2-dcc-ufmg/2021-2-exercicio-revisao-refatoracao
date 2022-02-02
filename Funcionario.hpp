#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {
    public:
        /**
        *@brief Imprime informações do funcionário
        */
        virtual void print();
        /**
        *@brief Calcula a renda extra do funcionario
        */
        virtual double calculaExtra();
        /**
        *@brief Define o valor da renda extra do funcionario
        */
        virtual double setRendaExtra();
        /**
        *@brief Define o salário base do funcionário
        *@param salarioMin Salário base do funcionário
        */
        void setSalarioBase(double salarioMin) {
            salarioBase = salarioMin;
        }
    
    private:
        /**
        *@brief Valor mínimo recebido pelo funcionário    
        */
        double salarioBase;
        /**
        *@brief Percentual de comissão recebido pelo funcionário    
        */   
        double percComissao;
        /**
        *@brief Renda extra que o funcionario ganhará (bonificação ou comissão)  
        */
        double rendaExtra;
        /**       
        *@brief Dados do funcionário
        */
        string idade;
        string nome;
        int rgFunc;
};

#endif
