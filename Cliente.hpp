#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente
{

private:
	string nome;
	string endereco;
	string cep;

public:
	Cliente() : nome(""), endereco(""), cep(""){};
	Cliente(string nome, string endereco, string cep) : nome(nome), endereco(endereco), cep(cep){};

	string getNome();
	string getEndereco();
	string getCep();
	double getAlturaDosPais();

	void print(); // imprime na tela os dados de um cliente cadastrado
};

#endif
