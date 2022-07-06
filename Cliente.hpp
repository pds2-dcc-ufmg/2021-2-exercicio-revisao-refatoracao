#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{
	public:

		string nome;
		string endereco;
		string cep;

		Cliente(string _nome, string _endereco, string _cep):
		nome(_nome), endereco(_endereco), cep(_cep)
		{}


		void Cliente::print(){

			std::cout << "[Cliente]" << endl
				<< "  Nome: " << nome << endl
				<< "  Endereco: " << endereco << endl
				<< "  CEP: " << cep << endl;

		}
};

#endif
