#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	private:
		string _NOME;
		string _endereco;
		string _Cep;
	public:
		Cliente(string name,string endereco, string cep);
		Cliente() = default;
		void print(); // imprime na tela os dados de um cliente cadastrado
		
};

#endif
