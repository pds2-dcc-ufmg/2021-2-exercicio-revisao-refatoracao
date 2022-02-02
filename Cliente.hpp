#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	public:
		
		Cliente();

		Cliente(string nome, string endereco, string cep);
		
		string getNome();

		string getEndereco();

		string getCep();

		void print(); // imprime na tela os dados de um cliente cadastrado
	
	private:
	
		string _nome;
		string _endereco;
		string _cep;
		

};
