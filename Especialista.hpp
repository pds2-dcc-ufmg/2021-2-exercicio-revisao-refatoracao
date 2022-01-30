#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"

class Especialista : public Funcionario {

    public:
        Especialista();
        Especialista(string, int, int, double, string);
        void calcula_comissao(double);
        double getComissao();
        int getNumAtendimentos();
        void setNumAtendimentos(int);
        void print();

    private:
        string especialidade;
        double percentual_comissao = 0.1;
        double comissao_total;
        int num_atendimentos;
};

#endif
