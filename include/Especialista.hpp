#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

class Especialista : public Funcionario {
    public:
        double comissao(double ValorVenda);

        void print();

        void setEspecialidade(string especialidade);

        string getEspecialidade();

    private:
        string especialidade;
};

#endif
