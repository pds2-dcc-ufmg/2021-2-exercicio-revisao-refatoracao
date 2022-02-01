#ifndef ESPECIALISTA_HPP
#define ESPECIALISTA_HPP

#include<iostream>
#include "Funcionario.hpp"

using namespace std;

class Especialista: public Funcionario {
    private:
        static const double taxaComissao;
        string _especialidade; 
        int numAtendimentos = 0; 
        double _comissao = 0; //Guarda o total de comissão do especialista

    public:
        Especialista(const string& nome, int idade, int rgFunc, double salarioBase, string especialidade);
        void calculaComissao(double valorVenda); //colocar nome de método como verbo, indicar ação
        void print() override;
        void addNumAtendimentos();
        string getEspecialidade();
};

#endif