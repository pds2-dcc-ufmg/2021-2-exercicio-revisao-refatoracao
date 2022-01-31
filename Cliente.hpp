#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{

	public:
		std::string NOME,endereco, Cep;
        Cliente(){};
        Cliente(std::string nome,std::string endereco, std::string Cep);

		void print();
}

#endif
