#include "Funcionario.hpp"
#include "Cliente.hpp"

#ifndef Especialista_HPP
#define Especialista_HPP

class Especialista : public Funcionario {

    private:

        double perc = 0.1;
        double percWanda = 0.1;

    public:

        void setPerc(double perc);
        void setPercWanda(double percWanda);
        double getPerc();
        double getPercWanda();

        double comissao(ValorVenda);

        void print();

#endif