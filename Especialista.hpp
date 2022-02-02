#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

class Especialista : public Funcionario {

    private:
        static double perc = 0.1;
    
    public:
        string espec;
        double comissao(double valor_vnd);
        void print();
};

#endif
