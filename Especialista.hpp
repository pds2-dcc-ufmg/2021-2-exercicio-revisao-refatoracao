#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

double perc = 0.1;

class Especialista : public Funcionario {

    public:
        string especialidade;
        int numAtendimentos;
        double comissao;

    Especialista(double SalarioBase = 0, std::string IDADE = "", std::string nome = "",
                int rgFunc = 0, std::string especialidade = "", int numAtendimentos = 0,
                double comissao = 0);
    
    double valorcomissao(double ValorVenda);

    void print();
};

#endif
