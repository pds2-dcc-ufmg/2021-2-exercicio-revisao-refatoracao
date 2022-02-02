#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente
{
public:
	void print();

	void setNome(std::string);
	std::string getNome();
	void setEndereco(std::string);
	std::string getEndereco();
	void setCep(std::string);
	std::string getCep();

private:
	std::string _nome;
	std::string _endereco;
	std::string _cep;
};

#endif
