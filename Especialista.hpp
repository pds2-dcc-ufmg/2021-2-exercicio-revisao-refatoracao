#ifndef ESPECIALISTA_HPP
#define ESPECIALISTA_HPP

#include "Funcionario.hpp"

class Especialista : public Funcionario {
public:
    std::string especialidade;
    static double perc;
    static double percWanda;

    double comissao(double valorVenda) const;
    void print() const;
};

#endif
