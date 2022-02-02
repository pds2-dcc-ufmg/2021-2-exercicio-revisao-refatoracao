
#ifndef VENDA_HPP
#define VENDA_HPP

#include "Funcionario.hpp"

using namespace std;

class Venda{

    public:

        double VALOR;
        string descricao;
        Especialista esp;
        string cliente;


    void print();
};

class Cliente{

	public:

		string NOME;
		string endereco;
		string Cep;


		void print(); // imprime na tela os dados de um cliente cadastrado

};

#endif
