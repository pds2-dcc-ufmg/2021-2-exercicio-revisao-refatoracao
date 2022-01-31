#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

class Especialista : public Funcionario {
    private:
        std::string especialidade;
        int numAtendimentos;
        double comissao;

    public:
        Especialista(std::string nome, int idade, double salarioBase, int rgFunc, std::string especialidade) 
        : Funcionario(nome, idade, salarioBase, rgFunc) {
            this->especialidade = especialidade;
            numAtendimentos = 0;
            valorBonificacao = 0.1;
            comissao = 0;
        }

        void imprimirDados() override {
            std::cout << "[Funcionario]" << endl;
            std::cout << "[Especialista]" << endl;
            Funcionario::imprimirDados();
        }

        void adicionaAtendimento(){
            numAtendimentos ++;
        }
};

#endif