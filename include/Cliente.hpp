#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente {
	public:
		Cliente(std::string nome, std::string endereco, std::string cep);
	    
        	void imprime_dados();

        	void setNome(std::string nome);
        	void setEndereco(std::string endereco);
        	void setCep(std::string cep);

        	std::string getNome();
        	std::string getEndereco();
        	std::string getCep();
	
	private:
		std::string _nome, _endereco, _cep;
};

#endif
