#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;


class Especialista : public Funcionario {
    
    const double percentual = 0.1;

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
