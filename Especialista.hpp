#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

class Especialista : public Funcionario
{
public:
    Especialista();
    string especialidade;
    double comissao(double);
    void print();
};

#endif
