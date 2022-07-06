#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{
	public:

		string nome;
		string endereco;
		string cep;
		string alturaDosPais;

		void Cliente::print(){

			std::cout << "[Cliente]" << endl
				<< "  Nome: " << nome << endl
				<< "  Endereco: " << endereco << endl
				<< "  CEP: " << cep << endl;

		}
};

#endif
