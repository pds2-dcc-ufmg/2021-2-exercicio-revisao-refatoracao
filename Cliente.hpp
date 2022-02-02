#ifndef CLIENTE_H
#define CLIENTE_H

#include "Pessoa.hpp"
using namespace std;

class Cliente : public Pessoa{
	
	public:
		Cliente(string nome, string endereco, string cep);
		void print() const override;
	
	private:
		string nome;
		string endereco;
		string cep;
};

#endif
