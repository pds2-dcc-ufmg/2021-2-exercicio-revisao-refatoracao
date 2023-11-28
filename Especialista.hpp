#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include <string.h>

using namespace std;



class Especialista : public Funcionario {
    private:
        double perc = 0.1;
        double percWanda = 0.1;
        string especialidade;

    public:
        double comissao(double ValorVenda);
        void set_especialidade(string espec);
        string get_especialidade();
        void print();
};

#endif
