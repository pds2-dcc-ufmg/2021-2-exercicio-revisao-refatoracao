#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

class Especialista : public Funcionario {

    public:

        Especialista(std::string nome, std::string idade, int rg_func, double salario_base, std::string especialidade);
        double comissao(double valor_venda);
        void set_especialidade(std::string especialidade);
        std::string get_especialidade();
        void print(); //Imprime os dados do Especialista.

    private:
        std::string especialidade;
        double perc = 0.1; //porcentagem da comissão
};

#endif
