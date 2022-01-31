#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

class Funcionario : public Pessoa {
    private:
        double salarioBase;
        int rgFunc;
        double valorBonificacao;

    public:
        void imprimirDados() override {
            std::cout << "  Nome: " << nome << endl;
            std::cout << "  Idade: " << idade << endl
            std::cout << "  RGFunc: " << rgFunc << endl;
            std::cout << "  SalarioBase: R$ " << fixed << setprecision(2) << salarioBase <<endl;
        }

        double comissao(double valorVenda) {
            double c = valorVenda*valorBonificacao;
            return c;
        }

        void setSalarioBase(double novoSalario){
            salarioBase = novoSalario;
        }

        void setRgFunc(int novoRG){
            rgFunc = novoRG;
        }
};

#endif