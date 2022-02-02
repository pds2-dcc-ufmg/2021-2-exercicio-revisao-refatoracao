#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "venda.hpp"


double perc = 0.1;


class Especialista : public Funcionario {


    public:

        Especialista(std::string nome, int idade, int rgFunc, double salarioBase, std::string especialidade);

        double calcula_comissao(double ValorVenda); 

        void print() override;

        void efetuar_venda(Venda venda);

    private:
        std::string _especialidade;
        double _comissao = 0;
        int _numVendas = 0;

};

#endif
