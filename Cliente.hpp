#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente : public Pessoa{
	
	public:
		Cliente(string nome, string endereço, string cep);
		void print() const override;
	
	private:
		string nome;
		string endereco;
		string cep;
};

#endif
