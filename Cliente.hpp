#include <string>

#ifndef CLIENTE_H
#define CLIENTE_H

class Cliente{

	private:

		std::string nome;
		std::string endereco;
		std::string cep;

	public:

		void print(); // imprime na tela os dados de um cliente cadastrado

}

#endif
