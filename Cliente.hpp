#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente {
	public:
		Cliente(std::string NOME, std::string endereco, std::string Cep): _NOME(NOME), _endereco(endereco), _Cep(Cep) {}
	
	        std::string getNome() const{
	            return _NOME;
	        }
	        std::string getEndereco() const{
	            return _endereco;
	        }
	        std::string getCep() const{
	            return _Cep;
	        }
		void print() const; // imprime na tela os dados de um cliente cadastrado

	private:
	        std::string _NOME;
		std::string _endereco;
		std::string _Cep;
};

#endif
