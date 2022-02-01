#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>
#include "Funcionario.hpp"

using namespace std;

class Gerente : public Funcionario {
    public:

        Gerente(string _nome, int _idade, string _rg, double _salarioBase, double _valorBonificacao);

        // chama o método printDados da classe Funcionário, que imprime a idade e o rg do funcionário
        // depois imprime o nome e o salário base do especialista
        void printDadosGerente();
        double calcularBonificacao(int quantidadeTotalVendas);

        double getValorBonificacao();
        void setValorBonificacao(double _bonificacao);

    private:
        double valorBonificacao = 15.0;

};

#endif

