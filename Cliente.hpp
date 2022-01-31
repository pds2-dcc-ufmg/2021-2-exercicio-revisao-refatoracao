#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{

	public:
		void print(); 
		
		void setNome(std::string);
		void setEndereco(std::string);
		void setCep(std::string);

		std::string getNome();
		std::string getEndereco();
		std::string getCep();

	private:
		std::string nome;
		std::string endereco;
		std::string cep;
};

#endif
