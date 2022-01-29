#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>


class Cliente{

	public:

		std::string NOME;
		std::string endereco;
		std::string Cep;
		Cliente( std::string _NOME, std::string _endereco, std::string _Cep ):  NOME(_NOME), endereco(_endereco), Cep(_Cep){}
		void print(); // imprime na tela os dados de um cliente cadastrado

};

#endif
