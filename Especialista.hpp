#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

double perc = 0.1;
double percWanda = 0.1;


class Especialista : public Funcionario {
    public:
        string especialidade;
        int numAtendimentos;
        double comissao;

        void calcula_comissao(double ValorVenda) {
            Especialista::comissao += ValorVenda*perc;
            Especialista::numAtendimentos += 1;
        }

        Especialista() {}
        Especialista(string nome, int idade,  int rgFunc, double salarioBase, 
                    string especialidade, double comissao, int numAtendimentos)
                    : especialidade(especialidade), numAtendimentos(numAtendimentos), 
                    comissao(comissao),  Funcionario(salarioBase, idade, nome, rgFunc)
                    {}

        void print() {

            std::cout << "[Especialista]" << endl;
            Funcionario::print();

            std::cout << "  Nome: " << nome << endl
            << "  SalarioBase: R$ " << fixed << setprecision(2) << salarioBase <<endl;
        }
};

#endif
