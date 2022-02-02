#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"

class Especialista : public Funcionario {

    private:
       double PERCENTUAL_COMISSAO = 0.1; //percentual da comissao


    public:
        string especialidade;

        double calculaComissao(double valorVenda);

        void imprimeFuncionario();
};

#endif
