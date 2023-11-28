#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {
    
    protected:
        double SalarioBase; // valor m�nimo recebido pelo funcion�rio
        string idade;
        string nome;
        int rgFunc; 

    public:
        void print();
        void print_oi();
        double get_SalarioBase();
        void set_SalarioBase(double salario);
        string get_idade();
        void set_idade(string age);
        string get_nome();
        void set_nome(string name);
        int get_rgFunc();
        void set_rgFunc(int rg);

};

#endif
