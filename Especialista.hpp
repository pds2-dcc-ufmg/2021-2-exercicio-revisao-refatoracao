#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;




class Especialista : public Funcionario {

    private:
        static double perc = 0.1;
    
    public:
        string especialidade;

    double comissao(double ValorVenda) {
        double c = ValorVenda*perc;
                  return c;
    }


    void print() {

        std::cout << "[Especialista]" << endl;
        Funcionario::print();
    }
};

#endif
