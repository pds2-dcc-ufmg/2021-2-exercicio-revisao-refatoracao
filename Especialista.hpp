#ifndef Especialista_HPP
#define Especialista_HPP

double const PORCENTAGEM = 0.1;

#include "Funcionario.hpp"

//int totalDeServicos = 0;

class Especialista : public Funcionario {
    public:
        Especialista();
        Especialista(std::string _nome,
                    std::string _idade,
                    int _rgFunc,
                    double _salarioBase,
                    std::string _especialidade);

    public:
        std::string especialidade;
        int numDeAtendimentos = 0;
        double comissao = 0;

        void adicionaComissao(double valorVenda);
        void print();
};

#endif
