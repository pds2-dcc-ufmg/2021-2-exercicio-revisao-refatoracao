#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

class Funcionario {

    private:

        std::string nome;
        std::string idade;
        int rgFunc;
        double SalarioBase; // valor mínimo recebido pelo funcionário
        std::string especialidade;


    public:
        void setNome(std::string nome);
        void setIdade(std::string idade);
        void setRgFunc(int rgFunc);
        void setSalarioBase(double SalarioBase);
        void setEspecialidade(std::string especialidade);
        std::string getNome();
        std::string getIdade();
        int getRgFunc();
        double getSalarioBase();
        std::string getEspecialidade();

        void print(); // imprime dados do funcionario
}

#endif
