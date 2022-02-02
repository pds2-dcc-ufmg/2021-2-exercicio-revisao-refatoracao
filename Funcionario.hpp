#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

class Funcionario {

    public:

        void setNome(std::string nome);
        void setIdade(std::string idade);
        void setRgFunc(int rgFunc);
        void setSalarioBase(double SalarioBase);
        std::string getNome();
        std::string getIdade();
        int getRgFunc();
        double getSalarioBase();

        void printFunc(); // imprime dados do funcionario
        
    protected:

        std::string nome;
        std::string idade;
        int rgFunc;
        double SalarioBase; // valor m�nimo recebido pelo funcion�rio

};

#endif
