#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente
{
private:
	std::string _nome;
	std::string _endereco;
	std::string _cep;

public:
	void print(); // imprime na tela os dados de um cliente cadastrado
	void set_nome(std::string nome);
	void set_endereco(std::string endereco);
	void set_cep(std::string cep);
	std::string get_nome();
	std::string get_endereco();
	std::string get_cep();

};

#endif
