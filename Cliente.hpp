#ifndef CLIENTE_H
#define CLIENTE_H

#include <iostream>
#include <string>

class Cliente{

	public:
		void print();
		
		void set_NOME(std::string _nome);
		std::string get_NOME();
		
		void set_Endereco(std::string _endereco);
		std::string get_Endereco();
		
		void set_Cep(std::string _cep);
		std::string get_Cep();
		
    private:
		std::string NOME;
		std::string endereco;
		std::string Cep;

};

#endif
