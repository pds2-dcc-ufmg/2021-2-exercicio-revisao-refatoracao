#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

class Funcionario : public Pessoa {
    private:
        double salarioBase;
        int rgFunc;
        double valorBonificacao;
        double comissao;

    public:
        Funcionario(std::string nome, int idade, double salarioBase, int rgFunc) : Pessoa(nome, idade) {
            this->salarioBase = salarioBase;
            this->rgFunc = rgFunc;
            this->valorBonificacao = 0.0;
        }

        void imprimirDados() override {
            std::cout << "  Nome: " << nome << endl;
            std::cout << "  Idade: " << idade << endl
            std::cout << "  RGFunc: " << rgFunc << endl;
            std::cout << "  SalarioBase: R$ " << fixed << setprecision(2) << salarioBase <<endl;
        }

        double adicionaComissao(double valorVenda) {
            double c = valorVenda*valorBonificacao;
            comissao += c;
        }
};

#endif