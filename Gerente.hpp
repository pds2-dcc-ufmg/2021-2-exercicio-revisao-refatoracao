#ifndef GERENTE_HPP
#define GERENTE_HPP

#include "Funcionario.hpp"
#include <iostream>
#include <iomanip>





class Gerente : public Funcionario {

    private: 

        Funcionario* mf;
        double bonificacao;

    public:

        double valorBonificacao = 15.0;

        //Declarar um construtor da classe
        Gerente(Funcionario *f, double bonificacao);

        virtual ~Gerente();

        void print() override;

        double calculaBonificacaoGerente(int numTotalVendas);

        double calculaSalario();

        void setBonificacao(double bonificacao);

};

// Após as alterações Gerente agora é uma instância de Funcionario, declaração dos metodos calculaSalario e setBonificacao, algumas variáveis inutilizadas foram comentadas
//e declarado um construtor para a classe além de que agora o "hpp" só possui as declarações

#endif

