#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente
{

protected:
	std::string _nome;
	std::string _endereco;
	std::string _cep;

public:

	Cliente(std::string _nome = "", std::string _endereco = "", std::string _cep = "");

	std::string getNome();
	std::string getEndereco();
	std::string getCEP();

	void setNome(std::string nome);
	void setEndereco(std::string Endereco);
	void setCEP(std::string cep);

	void print();
};

#endif
