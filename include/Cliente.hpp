#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include <iostream>
#include <string>
#include "Pessoa.hpp"



class Cliente: public Pessoa{

	public:
		std::string Endereco;
		std::string Cep;
		void ImprimeDados() const override;
		Cliente(const std::string& Nome, std::string Endereco, std::string Cep);

};

#endif
