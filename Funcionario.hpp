#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>
#include "Pessoa.hpp"

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
            this->comissao = 0.0;
        }

        void imprimirDados() override {
            std::cout << "Nome: " << nome << std::endl;
            std::cout << "Idade: " << idade << std::endl
            std::cout << "RGFunc: " << rgFunc << std::endl;
            std::cout << "SalarioBase: R$ " << std::fixed << setprecision(2) << salarioBase << std::endl;
            std::cout << "Salario Total: R$" << this->salarioBase + this->comissao << std::fixed << setprecision(2) << std::endl;
        }

        double adicionaComissao(double valorVenda) {
            double c = valorVenda*valorBonificacao;
            comissao += c;
        }
};

#endif