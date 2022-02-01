#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {
    protected:
        double salarioBase; // valor minimo recebido pelo funcionario
        string idade;
        string nome;
        int rgFunc;

    public:
        // Construtores
        Funcionario(string argNome, string argIdade, int argRg, double argSalario):
        nome(argNome), idade(argIdade), rgFunc(argRg), salarioBase(argSalario) {}
        Funcionario(){}

        // Retorna salarioBase
        double getSalarioBase();

        //  Retorna idade
        string getIdade();

        // Retorna nome
        string getNome();

        // Retorna rgFunc
        int getRg();
        
        // Imprime as informações do funcionário 
        virtual void print();
};

#endif
