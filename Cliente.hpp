#ifndef CLIENTE_H
#define CLIENTE_H

#include <iostream>
using namespace std;

class Cliente{
	public:

		string nome;
		string endereco;
		string cep;

		Cliente(string _nome, string _endereco, string _cep):
		nome(_nome), endereco(_endereco), cep(_cep)
		{}


		void imprimeDados(){
			cout << "[Cliente]" << endl
				<< "  Nome: " << nome << endl
				<< "  Endereco: " << endereco << endl
				<< "  CEP: " << cep << endl;

		}
};

#endif
