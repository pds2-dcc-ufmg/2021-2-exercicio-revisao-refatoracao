#ifndef GERENTE_HPP
#define GERENTE_HPP

#include "Funcionario.hpp"

class Gerente:public Funcionario {
    private:

        double bonificacao;

    public:

        double getBonificacao();

        void setBonificacao(double Bonificacao);

        void print();

        double calcula_BONIFICACAO_GERENTE(int numTOTALVendas);

};

#endif

//Aplica-se o 'std' nas palavras reservadas, 'endl' e 'cout'
//Herança da classe Funcionario
//Alteração de bonificação para um atributo privado
//Retira-se a biblioteca <iostream> e <iomanip>, pois já foram incluídas em Funcionario.hpp
//Exclui-se o escopo das funções print e calcula_BONIFICACAO_GERENTE para defini-los no .cpp
//Adição de getters e setters
//Move-se ValorBonificacao para o Gerente.cpp, a título de se evitar a múltipla declaração.