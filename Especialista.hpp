#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

#define perc 0.1;

using namespace std;

class Especialista : public Funcionario {
    public:
    void SetEspecialidade(string Especialidade);
    string GetEspecialidade();
    double comissao(double ValorVenda);
    void Print();
    private:
    string Especialidade;
};

#endif
