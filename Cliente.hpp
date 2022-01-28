#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include "Pessoa.hpp"

using namespace std;

class Cliente : public Pessoa{

	public:
		
		string getNome();
		string getEndereco();
		string getCep();

		Cliente(string nome, string endereco, string cep);

		void print() override; 

	private:

		string nome;
		string endereco;
		string cep;

};

#endif
