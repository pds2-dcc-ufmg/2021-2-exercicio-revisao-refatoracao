#ifndef CLIENTE_H
#define CLIENTE_H

#include <iostream>
#include <string>
using namespace std;

class Cliente{

	public:

		string NOME;
		string endereco;
		string Cep;

		void print() // imprime na tela os dados de um cliente cadastrado
		{
        cout << "[Cliente]" << endl
         << "  Nome: " << NOME << endl
		 << "  Endereco: " << endereco << endl
		 << "  CEP: " << Cep << endl;

		}

};

#endif
