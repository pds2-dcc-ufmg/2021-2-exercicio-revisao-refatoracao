#ifndef VENDA_HPP
#define VENDA_HPP

#include "Cliente.hpp"
#include "Especialista.hpp"

class Venda{

    private:
        double VALOR;
        std::string descricao;

    public:

        Especialista esp;
        Cliente cliente;

        void print();

        double getValor();
		std::string getDescricao();
		void setValor(double Valor);
		void setDescricao(std::string Descricao);
		
};

#endif

//Aplicam-se os 'std'
//Retira-se comentários desnecessários
//Troca-se cliente de string para o tipo Cliente
//Adiciona-se getters e setters
//Apaga-se o #include Funcionario, visto que não sera será necessário.
//Exclui-se o escopo da função print para defini-lo no .cpp