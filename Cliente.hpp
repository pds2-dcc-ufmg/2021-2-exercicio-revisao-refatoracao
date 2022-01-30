#ifndef CLIENTE_H
#define CLIENTE_H

#include <iostream>
#include <string>


class Cliente{

	public:

		
		Cliente(std::string nome ="", std::string endereco = "", std::string CEP = "");	
		
		std::string getNome() const;

		void imprimirDados() const; 
	private:
		std::string _nome;
		std::string _endereco;
		std::string _CEP;
		
};

#endif
