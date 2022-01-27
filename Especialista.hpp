#ifndef ESPECIALISTA_H
#define ESPECIALISTA_H

#include "Funcionario.hpp"


class Especialista : public Funcionario {


    public:
        Especialista(std::string nome, std::string idade, unsigned int rgFunc, unsigned int salarioBase, std::string especialidade);

        void comissao(double valorVenda);

        void print() const override;

    private:
        int _numAtendimentos = 0;
        double _comissao = 0.0;
        std::string _especialidade;
        double _perc = 0.1;
};

#endif
