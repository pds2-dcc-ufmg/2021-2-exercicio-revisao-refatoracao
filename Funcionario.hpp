#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Funcionario 
{
    public:
    //Setters
    void set_salario_base(double sb_inserido);
    void set_idade(string idade_inserida);
    void set_nome(string nome_inserido);
    void set_rg(int rg_inserido);
    //Getters
    double get_salario_base();
    string get_idade();
    string get_nome();
    int get_rg();

    //Impressão
    void print();

  private:
    double salario_base; //valor mínimo recebido pelo funcionário
    string idade;
    string nome;
    int rg;


};

#endif
