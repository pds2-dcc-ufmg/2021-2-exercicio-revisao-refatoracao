#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente : public Pessoa {
	private:
		std::string endereco;
		std::string cep;

		void setEndereco(std::string edereco) {}
		void setCep(int cep) {}
};

#endif