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
		string getNome();
		void setNome(string nomeNovo);
		
		string getEndereco();
		void setEndereco(string enderecoNovo);
	
		string getCep();
		void setCep(string cepNovo);
		
		void print(); // imprime na tela os dados de um cliente cadastrado

};

#endif
