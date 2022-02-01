#ifndef ESPECIALISTA_H
#define ESPECIALISTA_H

#include "Funcionario.hpp"
#include "Cliente.hpp"

class Especialista : public Funcionario {

    private:

        std::string Especialidade;
        double PercentualPorVenda = 0.1;
        int NumAtendimentos = 0;
        double Comissao = 0;

    public:

        Especialista();
        Especialista(std::string nome, int idade, int rgfunc, 
                     double salariobase, std::string especialidade);

        double calculaComissao(double ValorVenda);

        void print() override;

        void setEspecialidade(std::string novaEspecialidade);
        std::string getEspecialidade();

        void novoAtendimento();
        int getNumAtendimentos();

        void addComissao(double comissao);
        double getComissao();

        double calculaSalarioTotal() override;

};

#endif
