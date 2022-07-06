#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"

class Especialista: public Funcionario {

    public:
        Especialista(std::string nome, std::string IDADE, int rgFunc, double SalarioBase, std::string especialidade);
        void calcula_COMISSAO_ESPECIALISTA(const double &ValorVenda);
        void incNumAtendimentos();
        int getNumAtendimentos() const;
        double calcula_SALARIO_TOTAL() const override;
        void print() const override;
        static constexpr double perc = 0.1;

    private:
        std::string especialidade;
        double comissao{0};
        int numAtendimentos{0};
};

#endif