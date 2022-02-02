#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

double perc = 0.1;
double percWanda = 0.1;


class Especialista : public Funcionario {
    public:    
        double comissao(double ValorVenda) {
            double c = ValorVenda*perc;
            return c;
        }

        void get_especialidade(string s){
            this->especialidade = s;
        }

        void print() {

            std::cout << "[Especialista]" << endl;
            Funcionario::print();


            std::cout << "  Nome: ";
            print_nome();
            print_SalarioBase();
        }

        double salario_total(double n){
            return SalarioBase + n;
        }

    private:
        string especialidade;
};

#endif
