#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	public:
		// métodos que retornam as variaveis
		string getNomeCliente();
		string getEndereco();
		string getCEP();

		// métodos que alteram as variaveis
		void setNomeCliente(string nome);
		void setEndereco(string endereco);
		void setCEP(string cep);
		
		void print(); // imprime na tela os dados de um cliente cadastrado


	private:

		string nome;
		string endereco;
		string cep;
};

#endif
