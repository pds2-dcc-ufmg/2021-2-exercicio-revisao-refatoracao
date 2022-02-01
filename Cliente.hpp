#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	private:
		string nome;
		string endereco;
		string cep;

	public:
		Cliente(string argNome, string argEndereco, string argCep): nome(argNome), endereco(argEndereco), cep(argCep) {}
		void print(); // imprime na tela os dados de um cliente cadastrado

};

#endif
