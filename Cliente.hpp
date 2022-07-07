#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	public:
		string NOME;
		string endereco;
		string Cep;
		string AlturaDosPais;

		// imprime na tela os dados de um cliente cadastrado
		void print(){
			cout << "[Cliente]" << endl;
			cout << "  Nome: " << NOME << endl;
			cout << "  Endereco: " << endereco << endl;
			cout << "  CEP: " << Cep << endl;
		}
};

#endif