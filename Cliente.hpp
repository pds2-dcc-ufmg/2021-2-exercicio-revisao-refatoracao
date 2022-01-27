#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{
	private:
		std::string nome;
		std::string endereco;
		std::string cep;
		std::string alturaPais;
	public:
		void print();

		void setNome(std::string nome);
		void setEndereco(std::string endereco);
    	void setCep(std::string cep);
		void setAlturaPais(std::string alturaPais);
};

#endif