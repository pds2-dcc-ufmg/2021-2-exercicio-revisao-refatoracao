// Retirei uma variavel desnecessaria e o namespace std, nesse caso descenessario por serem poucas utilizacoes
// Organizei as impressoes para que fiquei mais legiveis, além de algumas alteracoes nos nomes das variaveis vindas
// de outros arquivos

#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"


double perc_comissao = 0.1;

class Especialista : public Funcionario {


    public:
        std::string especialidade;


    double comissao(double valor_venda) {
        double c = valor_venda*perc_comissao;
                  return c;
    }


    void print() {

        std::cout << "[Especialista]" << endl;
        Funcionario::print();


        std::cout << "  Nome: " << nome << endl;
        std::cout << "  SalarioBase: R$ " << fixed << setprecision(2) << salario_minimo <<endl;

    }
};

#endif
