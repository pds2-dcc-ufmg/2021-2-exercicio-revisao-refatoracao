#include "Funcionario.hpp"
#include "Cliente.hpp"

#ifndef Especialista_HPP
#define Especialista_HPP

class Especialista : public Funcionario {

    private:

        double perc = 0.1;
        double percWanda = 0.1;
        std::string especialidade;

    public:

        double comissao(ValorVenda);

        void print() {

            std::cout << "[Especialista]" << std::endl;
            Funcionario::print();
            std::cout << "Especialidade: " << especialidade << std::endl;

        }
}

#endif