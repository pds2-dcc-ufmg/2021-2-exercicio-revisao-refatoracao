#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

//Removi o "using namespace"

class Especialista : public Funcionario {

    private:
        std::string _especialidade;
        double _porcentagemPorVenda = 0.1; 
        unsigned int _NumAtendimentos;
        double _comissao = 0.0;

    public:

        Especialista();
        Especialista(std::string nome, int idade, unsigned int rgFunc, 
                     double salarioBase, std::string especialidade);

        double comissao(double ValorVenda);

        void print() override;

        std::string getNome();
};

#endif