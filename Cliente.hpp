#ifndef CLIENTE_H
#define CLIENTE_H
#include "Pessoa.hpp"
#include <string>
using namespace std;

class Cliente : public Pessoa{

	public:

		Cliente(string nome = " ", string endereco = " ", string cep = " ", string alturadospais = " ");

		void print() override; // imprime na tela os dados de um cliente cadastrado

};

#endif
