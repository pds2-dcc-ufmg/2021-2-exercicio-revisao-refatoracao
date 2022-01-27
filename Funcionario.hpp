#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario
{
public:
    double _salarioBase; // valor m�nimo recebido pelo funcion�rio
    string _idade;
    string _nome;
    int _RG;
    virtual void print();
    void setSalario(double salario);
    void setIdade(string idade);
    void setNome(string nome);
    void setRG(int RG);
    Funcionario();
    Funcionario(double salario, string idade, string nome, int rg);
    
    double getSalario();
    string getIdade();
    string getNome();
    int getRG();

    

protected:
    
};

#endif
