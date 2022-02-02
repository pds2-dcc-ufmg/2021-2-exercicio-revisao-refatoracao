#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include <iostream>
#include <iomanip>

class Comprador{
	public:
		virtual std::string getNomeCliente() const = 0;
		virtual std::string getEndereco() const = 0;
		virtual std::string getCep() const = 0;
		virtual ~Comprador() {};	
};

class Cliente: public Comprador{

	public:

	std::string getNomeCliente() const{
		return this->_nome;
	}

	std::string getEndereco() const{
		return this->_endereco;
	}
	
	std::string getCep() const{
		return this->_Cep;
	}
	
	Cliente(std::string nome,std::string endereco,std::string Cep){
		this->_nome = nome;
		this->_endereco = endereco;
		this->_Cep = Cep;
	}

	friend bool operator== (const Comprador& lhs, const Comprador& rhs){
        return lhs.getNomeCliente() == rhs.getNomeCliente();
    }

	protected:
		std::string _nome;
		std::string _endereco;
		std::string _Cep;
		
};

#endif
