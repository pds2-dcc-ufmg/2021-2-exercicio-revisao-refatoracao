#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

class Cliente{

	std::string _nome;
	std::string _endereco;
	std::string _cep;	

  public:

	void print();
	
	Cliente (std::string nome, std::string cep, std::string endereco) : _nome(nome), _cep(cep), _endereco(endereco) {}

	std::string getNome() {
          return _nome;
	}
    
	std::string getEndereco() {
          return _endereco;
	}
    
	std::string getCep() {
          return _cep;
	}
    
};

#endif
