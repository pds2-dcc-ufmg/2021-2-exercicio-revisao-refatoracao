#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{
	private:
		string nome;
		string endereco;
		string Cep;
		string AlturaDosPais;

	public:
		string get_nome();
		void set_nome(string name);
		string get_endereco();
		void set_endereco(string adress);
		string get_Cep();
		void set_Cep(string cep);
		string get_AlturaDosPais();
		void set_AlturaDosPais(string height);
		void print(); // imprime na tela os dados de um cliente cadastrado

};

#endif
