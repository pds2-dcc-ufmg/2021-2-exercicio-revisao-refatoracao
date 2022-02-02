#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
#include "Pessoa.hpp"

class Cliente : public Pessoa{
	protected:
        std::string _endereco;
        std::string _cep;

    public:
        Cliente(std::string nome, std::string endereco, std::string cep);
		void imprimir_dados() override;
};

#endif
