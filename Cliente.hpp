#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include "Pessoa.hpp"

using namespace std;

class Cliente : public Pessoa{

	public:

		string endereco;
		string Cep;

		Cliente(string _nome, string _endereco, string _cep);

		void print() const override; 

};

#endif
