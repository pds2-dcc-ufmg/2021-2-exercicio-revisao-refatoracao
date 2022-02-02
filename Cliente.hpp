#ifndef CLIENTE_H
#define CLIENTE_H
#include <string>
using namespace std;

class Cliente{

    public:
	string nome; // nome do cliente
	string endereco; // endereço do cliente
	string cep; // cep do cliente
	
	void print(); // imprime na tela os dados de um cliente cadastrado
};

#endif
