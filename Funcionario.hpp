#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>
#include <string>

/*
Essa eh a classe de um funcionario da empresa
*/

class Funcionario {

    public:
        virtual void print(); //imprime os dados do funcionario
        std::string getNome(); //acessa o nome do funcionario

    protected:
        double _salarioBase; //salario recebido pelo funcionario sem a soma de comissoes ou bonificacoes
        std::string _idade;
        std::string _nome;
        int _rgFunc; //registro do funcionario
};

#endif
