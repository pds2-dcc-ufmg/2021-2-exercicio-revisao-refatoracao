#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>
#include <iostream>

using namespace std;

class Cliente{
	private:
		string _nome;
		string _endereco;
		int _cep;

	public:
		Cliente (const string& nome, const string& endereco, int cep); 
		void print (); // imprime na tela os dados de um cliente cadastrado
        // void setCliente(const string& nome, const string& endereco, int cep);
        string getNome();
        string getEndereco();
        int getCep();
};
#endif