#include "Funcionario.hpp"

Funcionario :: Funcionario (string _nome, int _idade, int _registro, double _SalarioBase){
    nome = _nome;
    idade = _idade;
    registro = _registro;
    SalarioBase = _SalarioBase;
}

Funcionario :: Funcionario (){};

void Funcionario :: print()
    {
        cout << "[Funcionario]" << endl
        << "  Idade: " << idade << endl
        << "  RGFunc: " << registro << endl;
    }