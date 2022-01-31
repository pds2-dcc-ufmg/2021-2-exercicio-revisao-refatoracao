#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {
    public:
        /**
        *@brief 
        */
        void print();
        /**
        *@brief 
        */
        void print_oi();
    
    private:
        /**
        *@brief Valor mínimo recebido pelo funcionário    
        */
        double SalarioBase;
        /**
        *@brief Dados do funcionário
        */
        string IDADE;
        string nome;
        int rgFunc;
};

#endif
