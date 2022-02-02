#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{

	public:

		Cliente(std::string nome, std::string endereco, std::string cep);
		void print(); // imprime na tela os dados de um cliente cadastrado

		void setNome(std::string nome);
		void setEndereco(std::string endereco);
		void setCep(std::string cep);
		
		std::string getNome();
		std::string getEndereco();
		std::string getCep();
	
	private:

		std::string _nome;
		std::string _endereco;
		std::string _cep;

};

#endif
