#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>


double valor_bonificacao = 15.0;

class Gerente{
    public:
        double salario_base; // valor mínimo recebido pelo funcionário
        std::string idade;
        std::string nome;
        int rg_func;
        double bonificacao;


        void print() {
            std::cout << "[Funcionario]" << std::endl
            << "[Gerente]" << std::endl
            << "  Nome: " << nome << std::endl
            << "  Idade: " << idade << std::endl
            << "  RG Funcionario: " << rg_func << endl
            << "  Salario Base: R$ " << fixed << setprecision(2) << salario_base <<std::endl;
        }

        double calculaBonificacaoGerente(int num_total_vendas){
    
            return (num_total_vendas*valor_bonificacao);
        }

};

#endif

