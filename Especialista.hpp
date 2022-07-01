#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;




class Especialista : public Funcionario {


    private:
        string especialidade;
    public:

    double comissao(double ValorVenda);


    void print();
};

#endif
