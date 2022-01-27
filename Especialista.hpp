#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

double perc = 0.1;


class Especialista : public Funcionario {

    private:
        string especialidade;

    public:

        string getEspecialidade(){ return especialidade;}
        void setEspecialidade(string newEspecialidade)
        {
            this->especialidade = newEspecialidade;
        }

        double comissao(double ValorVenda) {
            double c = ValorVenda*perc;
                 return c;
        }


    void print() {

        std::cout << "[Especialista]" << endl;
        Funcionario::print();



        std::cout << "  Nome: " << nome << endl
        << "  SalarioBase: R$ " << fixed << setprecision(2) << SalarioBase <<endl;

    }
};

#endif
