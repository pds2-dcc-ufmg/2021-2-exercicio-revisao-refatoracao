#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>
#include "Funcionario.hpp"



class Gerente : public Funcionario {
    public:
        double SalarioBase; // valor m�nimo recebido pelo funcion�rio
        std::string IDADE; //reafirmacao dos dados
        std::string nome;
        int rgFunc;
        double bonificacao= 15.0; //bonificacao eh como a comissao pela quantidade de vendas realizados pelos funcioarios chefiados por esse gerente


        void print(); //override da implementacao da funcao da classe base

         double calcula_BONIFICACAO_GERENTE(int numTOTALVendas);//calcula qual o ganho variavel do gerente, a partir do numero total de vendas realizadas e da comissao -bonificacao- recebida por ele

        double calculasalariototal(int numTOTALVendas);//calcula o salario total a partir da soma da bonificacao com o salario base

};

#endif

