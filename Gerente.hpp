#ifndef GERENTE_HPP
#define GERENTE_HPP

#include "Funcionario.hpp"
#include <string>

using namespace std;


class Gerente : public Funcionario{
    private:
        double bonificacao;


    public:
Gerente(const std::string& nome, const std::string& idade, const int& rgFunc, const double& salarioBase, const double& bonificacao);

        double getBonificacao();

        void print();

        double calcula_BONIFICACAO_GERENTE(int numTOTALVendas);

};

#endif