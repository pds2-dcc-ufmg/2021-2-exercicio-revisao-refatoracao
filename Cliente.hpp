#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

// Mudança no nome das variáveis, deixando todas letras minúsculas e 
// Também, separando palavras diferentes da mesma variável por underline para facilitar o entendimento
// Não vai usar a variável AlturaDosPais

class Cliente{

	public:

		string nome;
		string endereco;
		string cep;

		void print(); // imprime na tela os dados de um cliente cadastrado

};

#endif
