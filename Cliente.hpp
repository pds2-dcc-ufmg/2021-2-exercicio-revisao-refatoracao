#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{

	public:
		//dados do cliente
		std::string _nome;
		std::string _endereco;
		int _cep;
		int _altura;
		void print(); // imprime na tela os dados de um cliente cadastrado

};

#endif
