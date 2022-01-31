#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"

namespace Funcionario{

    class Especialista : public Funcionario {

        protected:
            
            /* Porcentagem recebida pelos especialistas por cada venda que estes realizam */
            static double COMISSAO;
            
            std::string __especialidade;
            double __comissao = 0;
            unsigned int __numAtendimentos = 0;

        public:
            
            /* Método construtor da classe especialista */
            Especialista(double salario, std::string idade, std::string nome, int rg, std::string especialidade) :
                    Funcionario(salario, idade, nome, rg) { __especialidade = especialidade; }

            /* Imprime dados de um determinado especialista */
            void imprimeDados() const override;

            /* Especialista recebe a comissão pela venda realizada */
            void recebeComissao(double valorVenda);

            /* Retorna o número de atendimentos realizados por um determinado especialista */
            unsigned int getNumAtendimentos();

            /* Retorna o salário total recebido pelo especialista */
            double salarioTotal() override;

    };

}

#endif
