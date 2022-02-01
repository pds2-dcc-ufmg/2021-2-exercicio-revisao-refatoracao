#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{

	public:
        Cliente (std::string nome, std::string endereco, std::string cep);

		void print (); // imprime na tela os dados de um cliente cadastrado

    private:
		std::string nome;
		std::string endereco;
		std::string cep;
};

#endif
