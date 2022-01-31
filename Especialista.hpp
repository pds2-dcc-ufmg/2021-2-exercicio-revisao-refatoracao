#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

class Especialista : public Funcionario {

    public:

        virtual double comissao(double ValorVenda);

        virtual void print();


    private:

        std::string especialidade;
        
        const double perc = 0.1;
};

#endif
