#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

class Funcionario {
protected:
    double salario_base; // valor m�nimo recebido pelo funcion�rio
    std::string idade;
    std::string nome;
    std::string rgFunc;
public:
    Funcionario();
    Funcionario(std::string nome, std::string idade, std::string rgFunc, double salario_base);

    void print();

    double getSalarioBase();
    std::string getIdade();
    std::string getNome();
    std::string getRgFunc();
};

#endif // !FUNCIONARIO_HPP
