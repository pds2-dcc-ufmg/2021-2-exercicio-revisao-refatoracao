#ifndef ESPECIALISTA_H
#define ESPECIALISTA_H

#include "Funcionario.hpp"

#include <iomanip>
#include <string>

class Especialista : public Funcionario {

    public:

        Especialista(std::string nome, int rgFuncionario, int idade, double salarioBase, std::string especialidade, double percentual = 0.1, int numAtendimentos = 0, double comissaoTotal = 0);
        void setPercentual(double percentual);
        void setEspecialidade(std::string especialidade);
        double getPercentual();
        std::string getEspecialidade();
        int getNumAtendimentos();
        void calcularComissao(double ValorVenda);
        void print() const override;

    private:

        double percentual; //percentual para calcular a comissão de um especialista
        std::string especialidade;
        int numAtendimentos;
        double comissaoTotal;

};

#endif
