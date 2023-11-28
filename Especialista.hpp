#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

double perc = 0.1;
double percWanda = 0.1;


class Especialista : public Funcionario {
    private:
        string _especialidade;
    public:
        Especialista(string nome, string IDADE, int rgFunc, double SalarioBase, string especialidade):
        Funcionario(nome, IDADE, rgFunc, SalarioBase), _especialidade(especialidade) {}

    double comissao(double ValorVenda) {
        double c = ValorVenda*perc;
                  return c;
    }
    void print_nome() {
        cout << nome << endl;
    }

    void print() {

        cout << "[Especialista]" << endl;
        Funcionario::print();



        cout << "  Nome: " << nome << endl
        << "  SalarioBase: R$ " << fixed << setprecision(2) << SalarioBase << endl;

    }
};

#endif
