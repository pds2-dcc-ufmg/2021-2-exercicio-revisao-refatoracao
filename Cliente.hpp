#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{
	//em alguma classe eu removi um "public:" que nao estava fazendo diferenca acho que foi nessa mesmo
	public:
		 // todas as variaveis receberam a mesma formatacao
		string nome;
		string endereco;
		string cep;
		string alturaDosPais;

		void print(); // imprime na tela os dados de um cliente cadastrado

};

#endif
