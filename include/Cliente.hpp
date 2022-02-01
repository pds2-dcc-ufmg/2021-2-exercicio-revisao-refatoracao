#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{
	public:
        std::string _nome;
        std::string _endereco;
        std::string _cep;

        Cliente(std::string nome, std::string endereco, std::string cep) : _nome(nome), _endereco(endereco), _cep(cep){};

		void print(); // imprime na tela os dados de um cliente cadastrado
};

#endif
