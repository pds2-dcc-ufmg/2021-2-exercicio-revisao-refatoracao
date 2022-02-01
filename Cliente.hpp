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
	string alturaDosPais;

public:
	string getNome()
	{
		return this->nome;
	}
	void setNome(string nome)
	{
		this->nome = nome;
	}
	string getEndereco()
	{
		return this->endereco;
	}
	void setEndereco(string endereco)
	{
		this->endereco = endereco;
	}
	string getCep()
	{
		return this->cep;
	}
	void setCep(string cep)
	{
		this->cep = cep;
	}
	string getAlturaDosPais()
	{
		return this->alturaDosPais;
	}
	void setAlturaDosPais(string alturaDosPais)
	{
		this->alturaDosPais = alturaDosPais;
	}

	void print(); // imprime na tela os dados de um cliente cadastrado
};

#endif
