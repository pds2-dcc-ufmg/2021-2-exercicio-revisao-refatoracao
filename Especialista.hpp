#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"

/*
Classe que representa um funcionario do tipo Especialista
*/
class Especialista : public Funcionario {

    public:

        //metodo construtor da classe
        Especialista(double salariob = 0,
                     std::string idade = " ",
                     std::string nome = " ",
                     int rgfunc = 0,
                     std::string especialidade = " ",
                     double percentual = 0.1, 
                     double comissaototal = 0,
                     int num_atendimentos = 0);

        /*acrescenta o valor da comissao recebida em uma venda
        ao valor total de comissao acumulado pelo especialista */
        void adicionar_comissao(double valor_venda);

        //retorna o valor total de comissao acumulado pelo epecialista
        double get_comissao_total();

        //conta +1 no numero de atendimentos do especialista
        void contador_de_atend();

        //retorna o numero de atendimentos do especialista
        int get_num_atend();

        //imprime na tela as informacoes de um especialista cadastrado
        void imprimir_dados_funcionario() override;
        
    private:

        /*
        Dados relacionados ao especialista
        */
        std::string _especialidade; //especializacao do especialista
        double _percentual; //porcentagem recebida como comissao sobre o valor de cada venda
        double _comissao_total; //valor total recebido como comissao 
        int _num_atendimentos; //numero de atendimentos realizados pelo especialista

};

#endif
