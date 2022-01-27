#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include <string>

double porcentagem = 0.1;

class Especialista : public Funcionario {
    private:
        std::string especialidade;
    public:
        void setEspecialidade(std::string especialidade);

        double comissao(double valorVenda);
        void print() override;
};

#endif