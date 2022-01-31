#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>

#include "Funcionario.hpp"

namespace Funcionario{

    class Gerente : public Funcionario {
        
        protected:
            
            /* Valor recebido pelo gerente a cada venda realizada */
            static double BONIFICACAO;

            // /* Calcula o bônus total recebido pelo gerente */
            // double calculaBonificacao(unsigned int  numTotalDeVendas);

        public:

            /* Método construtor da classe Gerente */
            Gerente(double salario, std::string idade, std::string nome, int rg) :
                Funcionario(salario, idade, nome, rg) {}

            /* Imprime os dados de um determinado gerente */
            void imprimeDados() const override;

            /* Retorna o salário total recebido pelo gerente */
            double salarioTotal() override;

    };

}

#endif
