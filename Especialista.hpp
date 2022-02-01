#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

double perc = 0.1;
double percWanda = 0.1;


class Especialista : public Funcionario {

    public:
        string _especialidade;
        int _numAtendimentos;
        double _valorVenda;

    Especialista(double salarioBase, string idade, string nome, int rg, string especialidade, int numAtendimentos, double valorVenda):
                Funcionario(salarioBase, idade, nome, rg),
                _especialidade(especialidade), _numAtendimentos(numAtendimentos), _valorVenda(valorVenda){};
    
    void print();
    private:
        double calculaComissao(double ValorVenda);

};

#endif
