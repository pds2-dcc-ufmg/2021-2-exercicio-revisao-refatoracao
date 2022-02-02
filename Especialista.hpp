#ifndef ESPECIALISTA_HPP
#define ESPECIALISTA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

class Especialista : public Funcionario {

    public:

        void setEspecialidade(std::string especialidade);
        std::string getEspecialidade();

        double comissao(double ValorVenda);

        void print();

    private: 
        std::string especialidade;
};
#endif