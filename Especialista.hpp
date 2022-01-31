#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Pessoa.hpp"

class Especialista : public Funcionario {
    private:
        std::string especialidade;
        int numAtendimentos;

    public:
        Especialista(std::string nome, int idade, double salarioBase, int rgFunc, std::string especialidade) 
        : Funcionario(nome, idade, salarioBase, rgFunc, 0.1) {
            this->especialidade = especialidade;
            this->numAtendimentos = 0;
        }

        Especialista(){}

        void imprimirDados() override {
            std::cout << "[Funcionario]" << std::endl;
            std::cout << "[Especialista]" << std::endl;
            Funcionario::imprimirDados();
            std::cout << "  Num Atendimentos: " << this->numAtendimentos << std::endl;
            std::cout << std::endl;
        }

        void adicionaAtendimento(){
            numAtendimentos ++;
        }

        int getNumAtendimentos() {
            return this->numAtendimentos;
        }
};

#endif