#ifndef PESSOA_H
#define PESSOA_H

#include <string>


class Pessoa{

	public:

		std::string nome;

		virtual void print()=0; // imprime na tela os dados de um cliente cadastrado

};

#endif