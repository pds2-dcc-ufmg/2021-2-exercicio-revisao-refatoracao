#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{

	public:

		Cliente(std::string nome, std::string endereco, std::string cep);
		void set_nome(std::string nome);
		std::string get_nome();
		void set_endereco(std::string endereco);
		std::string get_endereco();
		void set_cep(std::string cep);
		std::string get_cep();;
		void print(); // imprime na tela os dados de um cliente cadastrado

	private:

		std::string nome;
		std::string endereco;
		std::string cep;
};

#endif
