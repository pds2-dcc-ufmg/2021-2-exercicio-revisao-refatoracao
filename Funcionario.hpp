#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {
    public:
        /**
        *@brief Imprime informações do funcionário (nome, idade e rg)
        */
        virtual void print() {
            cout << "[Funcionario]" << endl
            << "  Idade: " << IDADE << endl
            << "  RGFunc: " << rgFunc << endl;
        }
    
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
