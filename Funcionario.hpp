#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <string>
#include <iomanip>

/*
Classe que representa um funcionario da empresa
*/
class Funcionario {

    public:

        //metodo construtor da classe
        Funcionario(double salariob = 0,
                    std::string idade = " ",
                    std::string nome = " ",
                    int rgfunc = 0);

        //imprime na tela os dados de um funcionario cadastrado
        virtual void imprimir_dados_funcionario();

        //retorna o nome do funcionario
        std::string getnome_func();

        //retorna o salario base do funcionario
        double get_salario_base();

    protected:

        /*
        Dados relacionados ao funcionario
        */
        double _salario_base; //valor minimo recebido pelo funcionario
        std::string _idade;
        std::string _nome;
        int _rgFunc; //RG do funcionario

};

#endif
