#ifndef CLIENTE_H
#define CLIENTE_H

#include <iostream>
using namespace std;
#include <string>


class Cliente{

	public:
	    Cliente();
		Cliente(string _nome, string _endereco, string _cep);

		void printDados(); // imprime na tela os dados de um cliente cadastrado

		string getNome();
		string getEndereco();
		string getCep();

		void setNome(string _nome);
		void setEndereco(string _endereco);
		void setCep(string _cep);		

	private:
		string nome;
		string endereco;
		string cep;

};

#endif
