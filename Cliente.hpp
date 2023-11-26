#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente{

	private:
		string nome;
		string endereco;
		string Cep;

	public:
		void print(); // imprime na tela os dados de um cliente cadastrado

	Cliente(_nome,_endereco,_Cep);
}
#endif
