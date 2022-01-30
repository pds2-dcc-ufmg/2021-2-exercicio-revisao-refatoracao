#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{

	private:
		std::string nome;
		std::string endereco;
		std::string cep;

	public:
		std::string getNome();
		std::string getEndereco();
		std::string getCep();

		void setNome(std::string novoNome);
		void setEndereco(std::string novoEndereco);
		void setCep(std::string novoCep);

		void print();

};

#endif
