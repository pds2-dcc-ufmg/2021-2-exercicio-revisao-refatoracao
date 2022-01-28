#ifndef Especialista_HPP
#define Especialista_HPP

#include "Pessoa.hpp"
#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

class Especialista : public Funcionario {

    public:
        string especialidade;
        double comissaoTotal = 0;

        Especialista();
        Especialista(string _nome, string _idade, int _rgFunc, double _SalarioBase, string _especialidade);

        double comissao(double ValorVenda);
        void print() const override;
        void computaAtendimento();
    
    private:
        double perc = 0.1;
        int numAtendimentos = 0;
};

#endif
