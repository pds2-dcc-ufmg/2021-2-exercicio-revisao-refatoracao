#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente
{

public:
	Cliente(string nome, string endereco, string cep) : nome(nome), endereco(endereco), cep(cep){};
	string getNome();
	void imprimir(); // imprime na tela os dados de um cliente cadastrado

private:
	string nome;
	string endereco;
	string cep;
};

#endif
