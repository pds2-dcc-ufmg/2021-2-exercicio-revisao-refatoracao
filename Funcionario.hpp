#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

using namespace std;

class Funcionario{
    public:
        double salario_base; // valor minimo recebido pelo funcionario
        string idade;
        string nome;
        int rg_func;

        void print(){
            cout << "[Funcionario]" << endl;
            cout << "  Idade: " << idade << endl;
            cout << "  RGFunc: " << rg_func << endl;
        }
};

#endif

/**
----Alterações:----
1.Padronização(ou formatação) dos nomes das variáveis
2.Identação melhor das linhas do código
3.Remoção da função "void print_oi()", pois não tinha uso útil ao programa, era desnecessária
**/
