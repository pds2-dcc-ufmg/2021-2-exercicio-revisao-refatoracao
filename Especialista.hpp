#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"

/*
Essa é classe de um funcionario do tipo especialista da empresa
*/

class Especialista : public Funcionario {

    public:

    Especialista(std::string nome, std::string idade, int rgFunc, double salarioBase, std::string especialidade); //construtor da classe

    int getNumAtendimentos(); //acessa o numero de atendimentos feitos pelo especialista

    void novoAtendimento(); //contador de atendimentos, soma 1 a cada atendimento feito

    void calcularComissao(double ValorVenda); //calcula a comissao acumulada que o especialista deve receber

    void print() override; //imprime os dados de um especialista

    private:
    /*
    Atribuicoes relacionadas a um especialista
    */
    std::string _especialidade; //especializacao do profissional
    int _numAtedimentos = 0; //numero de atendimentos realizados pelo especialista
    double _comissaoAcumulada = 0; //valor total acumulado pelo especialista em comissoes
    double _percentual = 0.1; //porcentagem recebida como comissao sobre o valor de cada serviço
};

#endif
