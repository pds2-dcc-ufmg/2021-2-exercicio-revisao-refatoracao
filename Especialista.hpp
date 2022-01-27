#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"

double perc = 0.1;

class Especialista : public Funcionario {

    public:
        //Construtor de especialista
        Especialista(double SalarioBase = 0,
            string IDADE = "",
            string nome = "",
            int rgFunc = 0,
            string especialidade = "", 
            int numAtendimentos = 0, 
            double comissao = 0);


        string especialidade;
        int numAtendimentos;
        double comissao;

        //Aumenta a comissão do especialista
        double AumentoComissao(double ValorVenda);

        //Imprime os dados do especialista
        void print();
};

#endif
