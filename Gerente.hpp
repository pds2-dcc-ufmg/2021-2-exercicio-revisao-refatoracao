#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

double valorbonificacao = 15.0;

class Gerente : public Funcionario {
    
    public:
        double bonificacao;


        void print() {
            std::cout << "[Funcionario]" << std::endl;
            std::cout << "[Gerente]" << std::endl;
            std::cout << "  Nome: " << nome << std::endl;
            std::cout << "  Idade: " << idade << std::endl;
            std::cout << "  RGFunc: " << rgfunc << std::endl;
            std::cout << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << salariobase << std::endl;
        }

        double calculabonificacaogerente(int numtotalvendas) {
            double x;
            return numtotalvendas*valorbonificacao;
        }

};

#endif
