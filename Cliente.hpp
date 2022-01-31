#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>

class Cliente : public Pessoa {
	private:
		std::string endereco;
		std::string cep;

		void setEndereco(std::string edereco) {}
		void setCep(int cep) {}
};

#endif