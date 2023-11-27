#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"

double percentual = 0.1;

class Especialista : public Funcionario {
private:
    std::string especialidade;

public:
    double comissao(double valorVenda);
    void imprimeDadosEspecialista();
};

#endif
