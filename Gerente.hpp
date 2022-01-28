#ifndef GERENTE_HPP
#define GERENTE_HPP

#include "Funcionario.hpp"

/*
Classe que representa um funcionario do tipo Gerente
*/
class Gerente : public Funcionario {
    
    public:

        //metodo construtor da classe
        Gerente(double salariob = 0,
                std::string idade = " ",
                std::string nome = " ",
                int rgfunc = 0,
                double bonificacao_por_venda = 15.0,
                double bonificacao_total = 0);

        //imprime na tela os dados de um gerente cadastrado
        void imprimir_dados_funcionario() override;

        //calcula o valor total recebido pelo gerente como bonificacao
        void calcula_bonificacao_total(int num_total_atend);

        //retorna o valor total recebido pelo gerente como bonificacao
        double getbonificacao_tot();

    private:

        /*
        Dados relacionados ao gerente
        */
        double _bonificacao_por_venda; //valor recebido como bonificacao a cada venda

        double _bonificacao_total; //valor total recebido como bonificacao

};

#endif

