#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>
#include "Funcionario.hpp"

/*
Essa eh a classe de um funcionario do tipo gerente da empresa
*/

class Gerente : public Funcionario {

    public:

        Gerente(std::string nome, std::string idade, int rgFunc, double salariobase);  //metodo contrutor da classe
        
        void print() override; //imprime os dados de um gerente
        
        void calculaBonificacaoGerente(int numTotalVendas); //calcula bonificacao acumulada que o gerente deve receber

    private:
        /*
        Atribuicoes relacionadas a um gerente
        */
        double _bonificacaoAcumulada = 0; //valor total acumulado pelo gerente em bonificacoes
        double _valorBonificacao = 15.0; //valor recebido por cada bonificacao
};

#endif

