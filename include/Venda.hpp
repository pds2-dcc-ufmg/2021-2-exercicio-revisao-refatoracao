#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"
#include "Especialista.hpp"

namespace Venda{

    class Venda{

        private:

            double __valor;
            std::string __descricao;

            /* Especialista responsável pela venda */
            Funcionario::Especialista* __especialista;

            /* Cliente que está efetuanda a venda */
            Cliente::Cliente* __cliente;

        public:

            /* Método construtor da classe venda */
            Venda(double valor,
                std::string descricao,
                Funcionario::Especialista* especialista,
                Cliente::Cliente* cliente);

            /* Imprime as informações relacionadas à venda */
            void imprimeDados();

            /* Efetua a venda e faz com que o especialista receba sua comissão */
            void efetuaVenda();

            /* Retorna o valor da venda */
            double getValor();

            /* Retorna a descrição do que foi comprado ou contratado pelo cliente */
            std::string getDescricao();
    };

}

#endif
