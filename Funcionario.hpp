#pragma once
#include <iostream>
#include <iomanip>

using namespace std;
class Funcionario {
public:
        double salario_base; // valor minimo recebido pelo funcion?rio
        string IDADE;
        string nome;
        int rgFunc;
        void print();//imprime idade e RG do Funcionario
        void print_oi();//diz oi por algum motivo 
};

