#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>
#include <string>


class Funcionario {
    public:

        std::string getNome();
        int getIdade();
        int getRgFunc();
        double getSalarioMin();

        void setNome(std::string nome);
        void setIdade(int idade);
        void setRgFunc(int rgFunc);
        void setSalarioMin(double salarioMin);

        void imprimeDadosFuncionario();

    protected:

            double _salarioMin;
            int _idade;
            std::string _nome;
            int _rgFunc;

    };

#endif
