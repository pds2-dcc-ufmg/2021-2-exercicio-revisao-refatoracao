#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario
{
private:
    double SalarioBase; // valor m�nimo recebido pelo funcion�rio
    string idade;
    string nome;
    int rgFunc;

public:
    double getSalarioBase()
    {
        return SalarioBase;
    };
    void setSalarioBase(double Salario)
    {
        this->SalarioBase = Salario;
    }
    string getIdade()
    {
        return idade;
    };
    void setIdade(string idade)
    {
        this->idade = idade;
    };
    string getNome()
    {
        return nome;
    };
    void setNome(string Nome)
    {
        this->nome = Nome;
    };
    int getRgFunc()
    {
        return rgFunc;
    }
    void setRgFunc(int rgFunc)
    {
        this->rgFunc = rgFunc;
    }
    void print()
    {
        cout << "[Funcionario]" << endl
             << "  Idade: " << idade << endl
             << "  RGFunc: " << rgFunc << endl;
    }

    void print_oi()
    {
        cout << "Tchau" << endl;
    }
};

#endif
