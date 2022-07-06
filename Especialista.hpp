#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

double PERCENTUAL_COMISSAO = 0.1;

class Especialista : public Funcionario {
    public:
        string especialidade;

		Especialista(string _nome, string _idade, double _rgFunc, double _salarioBase, string _especialidade): 
        Funcionario(_nome, _idade, _rgFunc, _salarioBase){
            especialidade = _especialidade;
        }

    double comissao(double valorVenda) {
        return valorVenda * PERCENTUAL_COMISSAO;
    }

    void print() {
        std::cout << "[Especialista]" << endl;
        Funcionario::print();

        std::cout << "  Nome: " << nome << endl
        << "  SalarioBase: R$ " << fixed << setprecision(2) << salarioBase <<endl;

    }
};

#endif
