#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	public:

		void print(); // imprime na tela os dados de um cliente cadastrado
		void addCliente(string Nome, string Endereco, string Cep);
		string getNome();
		string getEndereco();
		string getCep();
		void setNome(string Nome);
		void setEndereco(string Endereco);
		void setCep(string Cep);

	protected:
		string _Nome;
		string _Endereco;
		string _Cep;
};

#endif
