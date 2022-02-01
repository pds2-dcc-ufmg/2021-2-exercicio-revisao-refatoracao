#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include <iostream>

using namespace std;

class Cliente{
	public:
		Cliente(std::string nome, std::sring endereco, std::string cep);
		void print();
	private:
		std::string _nome, std::string _endereco, std::string _cep;
};

#endif
