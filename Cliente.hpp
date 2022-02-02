#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{

	public:
		void setNome(std::string nome);
		void setEndereco(std::string endereco);
		void setCep(std::string cep);
		std::string getNome();
		std::string getEndereco();
		std::string getCep();
		
		void print(); // imprime na tela os dados de um cliente cadastrado
	private:

		std::string nome;
		std::string endereco;
		std::string cep;

};

#endif
