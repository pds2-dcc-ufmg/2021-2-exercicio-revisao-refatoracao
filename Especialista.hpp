#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"

using namespace std;




class Especialista : public Funcionario {


    public:
        Especialista(std::string nome, std::string idade, double salario_base, double rg_func, std::string especialidade);
        double comissao(double ValorVenda);
        void print() const;

    protected:
        std::string _especialidade;

};

#endif
