#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"


class Especialista : public Funcionario {


    double perc = 0.1;
    public:
        std::string especialidade;
        int numatendimentos=0;
        double Comissao=0;

       Especialista(){
           Funcionario();
           this->especialidade="";
       }

            Especialista(double SalarioBase,std::string idade,std::string nome, int rgFunc,std::string especialidade);
       double comissao(double ValorVenda);
    void print();
}

#endif
