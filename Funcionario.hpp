//NOTA DE ALTERA��ES
//Remo��o de m�todo desnecess�rio print_oi();
//Vari�veis IDADE e SalarioBase trocadas para corresponder padr�o de nomeclatura

#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {
    public:
        double salarioBase; // valor m�nimo recebido pelo funcion�rio
        string idade;
        string nome;
        int rgFunc;

        void print() {
            cout << "[Funcionario]" << endl
            << "  Idade: " << idade << endl
            << "  RGFunc: " << rgFunc << endl;
        }
};

#endif
