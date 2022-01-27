#ifndef ESPECIALISTA_HPP
#define ESPECIALISTA_HPP

#include "Funcionario.hpp"


class Especialista : public Funcionario {

    public:

        Especialista(std::string nome, std::string idade, int rgFunc, double salarioBase, std::string especialidade);

        double comissao(double valorVenda);

        std::string getNome() {
            return this->nome;
        }

        double getComissaoPVenda() {
            return this->comissaoPVenda;
        }

        double getPor100Comissao() {
            return this->por100Comissao;
        }

        int getNumAtendimentos() {
            return this->numAtendimentos;
        }

        void numAtendimentosIncrement() {
            this->numAtendimentos++;
        }

        void comissaoPVendaIncrement(double valor){
            this->comissaoPVenda += comissao(valor);
        }

        void print();

    private:

        std::string especialidade;
        double por100Comissao = 0.1;
        int numAtendimentos = 0;
        double comissaoPVenda = 0;

};

#endif
