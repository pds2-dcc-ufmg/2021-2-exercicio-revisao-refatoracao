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
		// Construtor
		Cliente(string argNome, string argEndereco, string argCep): nome(argNome), endereco(argEndereco), cep(argCep) {}
		
		// Imprime as informações do cliente cadastrado
		void print(); 

};

#endif
