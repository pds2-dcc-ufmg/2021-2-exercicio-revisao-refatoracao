#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include <string>

using namespace std;


class Especialista : public Funcionario {
    private: 
        std::string especialidade;
        double comissao;
        int numAtendimentos;
        double totalVendas = 0;

    public:
Especialista(const std::string& nome, const std::string& idade, const int& rgFunc, const double& salarioBase, const std::string& especialidade, const double& comissao, const int& numAtendimentos);

        std::string getEspecialidade();
        double getComissao();
        int getNumAtendimentos();
        double getTotalvendas();

        void incrementarAtendimento();
        double acumulaVenda(double valorVenda);

        void print();
};

#endif