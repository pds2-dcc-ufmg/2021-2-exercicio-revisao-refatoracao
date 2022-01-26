#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	public:
		void print(); // imprime na tela os dados de um cliente cadastrado
		string getNome(); 
		void setNome(string nome);
		string getEndereco(); 
		void setEndereco(string endereco);
		int getCep(); 
		void setCep(int cep); 
		string getAlturaDosPais(); 
		void setAlturaDosPais(string AlturaDosPais); 
	private:
		string nome;
		string endereco;
		int Cep;
		string AlturaDosPais;
};

#endif
