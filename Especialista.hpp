#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

static double perc = 0.1;

class Especialista : public Funcionario {

    public:
        string _especialidade;
        int _numAtendimentos;
        double _valorEmVendas;

    Especialista(double salarioBase, string idade, string nome, int rg, string especialidade):
                Funcionario(salarioBase, idade, nome, rg),
                _especialidade(especialidade){
                    _numAtendimentos = 0;
                    _valorEmVendas = 0;
                };
    void efetuaVenda(double valor);
    void print();
    private:
        double calculaComissao(double ValorVenda);

};

#endif
