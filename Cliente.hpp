#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{

	private:
		//dados do cliente
		std::string _nome;
		std::string _endereco;
		int _cep;
		int _altura;
	public:
		void print(); // imprime na tela os dados de um cliente cadastrado

};

#endif
