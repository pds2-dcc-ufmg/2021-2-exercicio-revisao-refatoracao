#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{
private:
	std::string nome;
	std::string endereco;
	std::string cep;
public:
	Cliente(std::string _nome, std::string _endereco, std::string _cep) : nome(_nome), endereco(_endereco), cep(_cep){
		print();
	}
	void print();
};

#endif
