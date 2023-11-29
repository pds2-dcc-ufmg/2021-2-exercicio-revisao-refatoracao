#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario {
    protected:
        string _nome;
        string _idade;
        int _rgFunc;
        double _salarioBase; // valor m�nimo recebido pelo funcion�rio

    public:
        Funcionario() {}

        Funcionario(string nome, string idade, int rgFunc, double salarioBase):
            _nome(nome), _idade(idade), _rgFunc(rgFunc), _salarioBase(salarioBase){}

        Funcionario(Funcionario& funcionario):
            Funcionario(funcionario._nome,
                        funcionario._idade,
                        funcionario._rgFunc,
                        funcionario._salarioBase) {}

        virtual ~Funcionario() {}

        virtual double salarioTotal() const;

        string getNome() const;

        void print() const;
};

#endif
