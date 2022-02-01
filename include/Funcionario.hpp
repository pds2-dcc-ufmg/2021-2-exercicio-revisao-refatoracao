#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>

namespace Funcionario{

    class Funcionario {
    
        protected:
            
            double __salarioBase;
            std::string __idade;
            std::string __nome;
            int __rgFunc;

        public:
            
            /* Armazena a quantidade de vendas que foram efetuadas, juntando todos os funcionários */
            static unsigned int NUMVENDAS;
            
            /* Armazena a soma de todas as vendas efetuadas pelos funcionarios */
            static double VALORTOTAL;

            /* Método construtor da classe Funcionário */
            Funcionario(double salario,
                std::string idade,
                std::string nome,
                int rg);

            /* Método que imprime as infrmações relacionadas a um determinado funcionário */
            virtual void imprimeDados() const;

            /* Retorna o salário total de um determinado funcionário */
            virtual double salarioTotal();

            /* Retorna o nome de um determinado funcionário */
            std::string getNome();

    };

}

#endif
