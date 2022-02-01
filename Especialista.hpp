#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;

double const perc = 0.1;

class Especialista : public Funcionario {

    private:
        string especialidade;
        unsigned int numAtendimentos=0;
        double valorComissao=0;

    public:
        // Construtores
        Especialista(string argNome, string argIdade, int argRg, double argSalario, string argEspecialidade):
        Funcionario(argNome, argIdade, argRg, argSalario), especialidade(argEspecialidade) {}
        Especialista(){}

        // Retorna especialidade
        string getEspecialidade();

        // Retorna valorComissao
        double getComissao();

        // Calcula comissao com base na venda e no percentual
        double comissao(double ValorVenda);

        // Retorna o numAtendimentos
        unsigned int getAtendimentos();

        // Acrescenta um valor a valorComissao
        void addComissao(double argComissao);

        // Adiciona 1 a numAtendimentos
        void addAtendimento();

        // Imprime informações do Especialista
        void print() override;
};

#endif
