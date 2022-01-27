#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Funcionario {
    private:
        double salarioBase;
        std::string idade;
        std::string nome;
        int rgFunc;
    public:
        double getSalarioBase()  const;
        std::string getIdade() const;
        std::string getNome() const;
        int getRgFunc() const;

        void setSalarioBase(double salarioBase);
        void setIdade(std::string idade);
        void setNome(std::string nome);
        void setRgFunc(int rgFunc);

        virtual void print();
        void printTchau();
};

#endif

