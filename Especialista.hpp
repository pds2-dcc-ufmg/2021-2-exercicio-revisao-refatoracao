#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"

class Especialista : public Funcionario {
    
    public:

        Especialista();
        Especialista(std::string, int, int, double, std::string);

        void adicionaComissao(double);
        void adicionaAtendimento();
        void imprimeDados() override;

    private:
        std::string especialidade;
        int numAtendimentos = 0;
        const double percentualPorVenda = 0.1;
};

#endif
