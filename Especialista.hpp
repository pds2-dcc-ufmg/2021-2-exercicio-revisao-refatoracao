#ifndef Especialista_HPP
#define Especialista_HPP

#include "Cliente.hpp"
#include "Funcionario.hpp"

using namespace std;

class Especialista : public Funcionario {

private:
    double perc = 0.1;
    double percWanda = 0.1;
    string especialidade;

public:
    void setEspecialidade(std::string especialidade);

    double comissao(double ValorVenda);

    void print();
};

#endif
