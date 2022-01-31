#ifndef ESPECIALISTA_H
#define ESPECIALISTA_H

#include "Funcionario.hpp"

using namespace std;

class Especialista : public Funcionario {

    public:
        void setEspecialidade(string especialidade);
        string getEspecialidade();

        void IncrementaComissao(double ValorVenda); // Soma 10% do valor da venda à comissão total do especialista, armazenando em "Comissao"
        double getComissao();
        
        void IncrementaAtendimentos(); // Soma 1 no atributo "NumAtendimentos"
        double getNumAtendimentos();
        
        void print() override; // Imprime na tela os dados do especialista

    private:
        string Especialidade;
        double Comissao = 0;
        int NumAtendimentos = 0;
};

#endif
