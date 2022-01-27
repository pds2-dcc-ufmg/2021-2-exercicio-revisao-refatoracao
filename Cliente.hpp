#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>

using namespace std;

class Cliente{
	public:
        //Construtor de cliente
        Cliente(string NOME = "",
            string endereco = "",
            string Cep = "",
            string AlturaDosPais = "");

		string NOME;
		string endereco;
		string Cep;
		string AlturaDosPais;
		
		void print(); // imprime na tela os dados de um cliente cadastrado
};

#endif
