#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

class Especialista : public Funcionario {
    public:
        const double perc = 0.1;
        Especialista(double SalarioBase, 
                     string IDADE,
                     string nome,
                     int rgFunc,
                     string especialidade): especialidade_(especialidade), 
                                         Funcionario(SalarioBase,
                                         IDADE,
                                         nome,
                                         rgFunc){};
        double comissao(double ValorVenda) {
            return ValorVenda * perc;
        }

        void print(){
            std::cout << "[Especialista]" << endl;
            Funcionario::print();
            std::cout << "  Nome: " << nome_ << endl
                    << "  SalarioBase: R$ " << fixed << setprecision(2) << salarioBase_ << endl;
        }
    private:
        string especialidade_;
};

#endif
