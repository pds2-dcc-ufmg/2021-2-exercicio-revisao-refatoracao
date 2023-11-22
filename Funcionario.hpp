#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Funcionario {
protected:
    string _nome;
    int _idade;
    int _rgFuncionario;
    double _salarioBase; // valor mínimo recebido pelo funcionário

public:
    Funcionario (std::string& nome, int idade, int rgFuncionario, double salarioBase);
    void imprimeDadosFuncionario() {
            cout << "[Funcionario]" << endl
            << "  Idade: " << IDADE << endl
            << "  RGFunc: " << rgFunc << endl;
    }
};

#endif
