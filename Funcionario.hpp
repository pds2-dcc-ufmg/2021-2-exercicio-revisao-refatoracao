#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {
    public:
        double SalarioBase; //Valor mínimo recebido pelo funcionário
        string IDADE;
        string nome;
        int rgFunc;

        //Imprime os dados do funcionário
        virtual void print() {
            cout << "[Funcionario]" << endl
            << "  Idade: " << IDADE << endl
            << "  RGFunc: " << rgFunc << endl;
        }

        //Imprime tchau ao invés de oi, estranha, mas não posso mudar a saída da main.
        void print_oi(){
            cout << "Tchau" << endl;
        }
};

#endif
