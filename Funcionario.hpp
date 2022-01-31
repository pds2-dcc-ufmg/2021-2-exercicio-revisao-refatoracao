#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {
    private:
    
    // @brief: valor mínimo recebido pelo funcionario
    
        double SalarioBase; 
        string Idade;
        string Nome;
        int RgDoFuncionario;

        void print() {
            cout << "[Funcionario]" << endl  << "  Idade: " << Idade << endl  << "  RGFunc: " << RgDoFuncionario << endl;
        }

      
};

#endif
