#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

class Especialista : public Funcionario {

    public:
        Especialista();
        Especialista(string nome, string idade, int rg, double salarioBase, string especialidade);
        double getComissao(double ValorVenda);
        void print() override;
        string getEspecialidade();
        void setEspecialidade(string especialidade);
        void addAtendimento();
        int getNumAtendimentos();

        const double percPorVenda = 0.1;
        
    private:
        string especialidade;
        int qtdAtendimentos = 0;

};

#endif