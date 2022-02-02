#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
#include "Pessoa.hpp"

class Cliente : public Pessoa{
	public:
        std::string _endereco;
        std::string _cep;

        Cliente(std::string nome, std::string endereco, std::string cep);

		void imprimir_dados() override;
};

#endif
