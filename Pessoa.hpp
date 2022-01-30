#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
#include <string>
using namespace std;

class Pessoa{

	public:

		string NOME;
		string endereco;
		string Cep;
        string idade;
		string AlturaDosPais;

		virtual void print();

};

#endif
