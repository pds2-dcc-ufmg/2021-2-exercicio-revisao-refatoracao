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
        Especialista(double SalarioBase, string IDADE, string nome, int rgFunc, string especialidade):
        Funcionario(SalarioBase, IDADE, nome, rgFunc), _especialidade(especialidade) {}

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
