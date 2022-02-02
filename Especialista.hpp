#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

class Especialista : public Funcionario {
    
    public:
        Especialista();
        double perc;
        double percWanda;
        void setEspecialidade(std::string Especialista);
        std::string getEspecialidade();
        std::string especialidade;
        double comissao(double);
        void print();
};

#endif