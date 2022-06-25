#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{
public:
	void print();
        void setNome(string);
	string getNome();
	void setEndereco(string);
	string getEndereco();
	void setCep(string);
	string getCep();

private:
	string _nome;
	string _endereco;
	string _cep;
};

#endif
