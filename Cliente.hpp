#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <iostream>
#include <iomanip>

class Cliente{

	public:
		std::string nome;
		std::string endereco;
		std::string cep;
		std::string altura_dos_pais;

		void print(); // imprime na tela os dados de um cliente cadastrado

};

#endif
