#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <iostream>

class Cliente {
private:
	std::string nome;
	std::string endereco;
	std::string CEP;

public:
	Cliente() {}
	Cliente(std::string nome, std::string endereco, std::string CEP);

	void print(); // imprime os dados do cliente na saida padrão
	std::string getNome();
};

#endif // !CLIENTE_HPP
