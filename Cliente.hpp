#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{

	private:

		std::string Nome;
		std::string Endereco;
		int Cep;

	public:

		Cliente();
		Cliente(std::string nome, std::string endereco, int cep);

		void print(); // imprime na tela os dados de um cliente cadastrado

		void setNome(std::string novoNome);
		std::string getNome();

		void setEndereco(std::string novoEndereco);
		std::string getEndereco();

		void setCep(int novoCep);
		int getCep();

};

#endif