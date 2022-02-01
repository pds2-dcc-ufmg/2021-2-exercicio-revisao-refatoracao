#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"


class Especialista : public Funcionario {

    private:
        std::string especialidade;

    public:
        std::string getEspecialidade();

        double comissao(double ValorVenda);

        void setEspecialidade(std::string Especialidade);

        void print();
};

#endif

//Aplicam-se os 'std' em todos os 'endl', palavras reservadas necessárias e na string 'especialidade'
//Introduzem-se os getters e setters e o .cpp, a fim de definir as funções. 
//Transforma-se Especialidade em um atributo privado. 
//Exclui-se o escopo das funções 'comissao' e 'print' da classe, a fim de definí-los no .cpp
//Retira-se o #include "Cliente", já que não será necessário.
//Move-se perc e percWanda, a título de se evitar a múltipla declaração